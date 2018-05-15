#include "../headers/serialconnectionwindow.h"
#include "ui_serialconnection.h"

SerialConnectionWindow::SerialConnectionWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SerialConnectionWindow)
{
    ui->setupUi(this);
}

SerialConnectionWindow::~SerialConnectionWindow()
{
    delete ui;
}
