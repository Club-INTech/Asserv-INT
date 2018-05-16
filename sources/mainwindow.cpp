#include "../headers/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->addWidget(&LB_statusbar);
    setWindowTitle(tr("Asserv'INT"));
    initConnections();
}

void MainWindow::initConnections()
{
    QObject::connect(ui->actionConnectSerial,SIGNAL(triggered(bool)),this,SLOT(popSerialConnectionWindow()));
    QObject::connect(ui->actionOpenTerminal,SIGNAL(triggered(bool)),this,SLOT(popTerminalWindow()));
    QObject::connect(ui->actionDisconnect,SIGNAL(triggered(bool)),this,SLOT(closeSerialPort()));
    QObject::connect(ui->actionClose,SIGNAL(triggered(bool)),this,SLOT(close()));
}

void MainWindow::openSerialPort(SerialPortConfig config)
{
    serialPort.setPortName(config.info.portName());
    serialPort.setBaudRate(config.baudrate);
    serialPort.setDataBits(config.dataBits);
    serialPort.setParity(config.parity);
    serialPort.setStopBits(config.stopBits);
    serialPort.setFlowControl(config.flowControl);

    if( serialPort.open(QIODevice::ReadWrite) )
    {
        LB_statusbar.setText(Utils::startColor("green")+tr("Connected to ")+config.info.description()+tr(" on ")+config.info.portName()+Utils::endFont());
        ui->actionConnectSerial->setEnabled(false);
        ui->actionDisconnect->setEnabled(true);
        ui->actionOpenTerminal->setEnabled(true);
    }
    else
    {
        LB_statusbar.setText(Utils::startColor("red")+tr("Connection failed to ")+config.info.description()+tr(" on ")+config.info.portName()+" ["+serialPort.errorString()+"]"+Utils::endFont());
    }
}

void MainWindow::closeSerialPort()
{
    serialPort.close();
    terminal->close();
    delete terminal;
    terminal = nullptr;

    ui->actionConnectSerial->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
    LB_statusbar.setText(tr("Waiting connection ..."));
}

void MainWindow::popSerialConnectionWindow()
{
    serialConnectionWindow = new SerialConnectionWindow();
    serialConnectionWindow->show();
    QObject::connect(serialConnectionWindow,SIGNAL(choiceComplete(SerialPortConfig)),this,SLOT(openSerialPort(SerialPortConfig)));
}

void MainWindow::popTerminalWindow()
{
    terminal = new Terminal(&serialPort);
    terminal->show();
    ui->actionOpenTerminal->setEnabled(false);
    QObject::connect(terminal,SIGNAL(closed(bool)),ui->actionOpenTerminal,SLOT(setEnabled(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete serialConnectionWindow;
}
