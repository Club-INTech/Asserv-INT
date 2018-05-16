#include "../headers/terminal.h"
#include "ui_terminal.h"


Terminal::Terminal(QSerialPort* serialPort, QWidget *parent) :
    QMainWindow(parent),
    serialPort(serialPort),
    ui(new Ui::Terminal)
{
    ui->setupUi(this);
    QObject::connect(serialPort,SIGNAL(readyRead()),this,SLOT(readData()));
    QObject::connect(ui->LE_text,SIGNAL(returnPressed()),this,SLOT(writeData()));

    QPalette p = ui->PTE_term->palette();
    p.setColor(QPalette::Base, Qt::black);
    p.setColor(QPalette::Text, Qt::white);
    ui->PTE_term->setPalette(p);
}

void Terminal::readData()
{
    const QByteArray data = serialPort->readAll();
    ui->PTE_term->insertPlainText(data);
    if(ui->CB_autoScroll->isChecked())
    {
        QScrollBar* sb = ui->PTE_term->verticalScrollBar();
        sb->setValue(sb->maximum());
    }
}

void Terminal::writeData()
{
    QByteArray data = ui->LE_text->text().toUtf8();
    if( !data.isEmpty() )
    {
        switch(ui->CB_endChars->currentIndex())
        {
            case 1: data.append('\r'); break;
            case 2: data.append('\n'); break;
            case 3: data.append('\r');data.append('\n'); break;
            default : break;
        }
        serialPort->write(data);
        data.insert(0,">>");
        if(ui->CB_endChars->currentIndex() == 0)
        {
            data.append('\r');data.append('\n');
        }
        ui->PTE_term->insertPlainText(data);
        ui->LE_text->clear();
        if(ui->CB_autoScroll->isChecked())
        {
            QScrollBar* sb = ui->PTE_term->verticalScrollBar();
            sb->setValue(sb->maximum());
        }
    }
}

void Terminal::closeEvent(QCloseEvent *event)
{
    Utils::unuse(event);
    emit closed(true);
}

Terminal::~Terminal()
{
    delete ui;
}
