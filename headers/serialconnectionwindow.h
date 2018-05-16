#ifndef SERIALCONNECTIONWINDOW_H
#define SERIALCONNECTIONWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QSerialPortInfo>
#include "serialportconfig.h"

namespace Ui {
class SerialConnectionWindow;
}

class SerialConnectionWindow : public QMainWindow
{
    Q_OBJECT
private:
    QList<QSerialPortInfo> list_ports;
    Ui::SerialConnectionWindow *ui;
signals:
    void choiceComplete(SerialPortConfig);
public slots:
    void onConnectPressed();
public:
    explicit SerialConnectionWindow(QWidget *parent = 0);
    ~SerialConnectionWindow();
    void refreshSerialPortList();
};


#endif // SERIALCONNECTIONWINDOW_H
