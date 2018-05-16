#ifndef SERIALPORTCONFIG_H
#define SERIALPORTCONFIG_H

#include <QSerialPort>
#include <QSerialPortInfo>

struct SerialPortConfig
{
    QSerialPortInfo             info;
    QSerialPort::BaudRate       baudrate;
    QSerialPort::DataBits       dataBits;
    QSerialPort::Parity         parity;
    QSerialPort::StopBits       stopBits;
    QSerialPort::FlowControl    flowControl;
};

#endif // SERIALPORTCONFIG_H
