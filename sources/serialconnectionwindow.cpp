#include "../headers/serialconnectionwindow.h"
#include "ui_serialconnection.h"

SerialConnectionWindow::SerialConnectionWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SerialConnectionWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowCloseButtonHint );
    refreshSerialPortList();

    QObject::connect(ui->PB_connect,SIGNAL(clicked(bool)),this,SLOT(onConnectPressed()));
    QObject::connect(ui->PB_cancel,SIGNAL(clicked(bool)),this,SLOT(close()));
}

void SerialConnectionWindow::onConnectPressed()
{
    SerialPortConfig config;
    config.info = list_ports.at(ui->CB_comList->currentIndex());

    switch(ui->CB_baudrate->currentIndex())
    {
        case 0: config.baudrate = QSerialPort::Baud1200; break;
        case 1: config.baudrate = QSerialPort::Baud2400; break;
        case 2: config.baudrate = QSerialPort::Baud4800; break;
        case 3: config.baudrate = QSerialPort::Baud9600; break;
        case 4: config.baudrate = QSerialPort::Baud19200; break;
        case 5: config.baudrate = QSerialPort::Baud38400; break;
        case 6: config.baudrate = QSerialPort::Baud57600; break;
        case 7: config.baudrate = QSerialPort::Baud115200; break;
    }

    switch(ui->CB_dataBits->currentIndex())
    {
        case 0: config.dataBits = QSerialPort::Data5; break;
        case 1: config.dataBits = QSerialPort::Data6; break;
        case 2: config.dataBits = QSerialPort::Data7; break;
        case 3: config.dataBits = QSerialPort::Data8; break;
    }

    switch(ui->CB_parity->currentIndex())
    {
        case 0: config.parity = QSerialPort::NoParity; break;
        case 1: config.parity = QSerialPort::EvenParity; break;
        case 2: config.parity = QSerialPort::OddParity; break;
        case 3: config.parity = QSerialPort::SpaceParity; break;
        case 4: config.parity = QSerialPort::MarkParity; break;
    }

    switch(ui->CB_stopBits->currentIndex())
    {
        case 0: config.stopBits = QSerialPort::OneStop; break;
        case 1: config.stopBits = QSerialPort::OneAndHalfStop; break;
        case 2: config.stopBits = QSerialPort::TwoStop; break;
    }

    switch(ui->CB_flowControl->currentIndex())
    {
        case 0: config.flowControl = QSerialPort::NoFlowControl; break;
        case 1: config.flowControl = QSerialPort::HardwareControl; break;
        case 2: config.flowControl = QSerialPort::SoftwareControl; break;
    }

    emit choiceComplete(config);
    close();
}

void SerialConnectionWindow::refreshSerialPortList()
{
    list_ports = QSerialPortInfo::availablePorts();
    for( const QSerialPortInfo& it : list_ports )
        ui->CB_comList->addItem(it.portName()+":"+it.description());
    if( list_ports.size() )
        ui->PB_connect->setEnabled(true);
}

SerialConnectionWindow::~SerialConnectionWindow()
{
    delete ui;
}
