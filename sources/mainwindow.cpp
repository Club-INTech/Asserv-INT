#include "../headers/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Asserv'INT"));

    initConnections();
}

void MainWindow::initConnections()
{
    QObject::connect(ui->actionConnectSerial,SIGNAL(triggered(bool)),this,SLOT(popSerialConnectionWindow()));
}

void MainWindow::popSerialConnectionWindow()
{
    serialConnectionWindow = new SerialConnectionWindow(this);
    serialConnectionWindow->show();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete serialConnectionWindow;
}
