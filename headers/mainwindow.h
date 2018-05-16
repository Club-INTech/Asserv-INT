#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QLabel>
#include "serialportconfig.h"
#include "serialconnectionwindow.h"
#include "terminal.h"
#include "utils.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initConnections();

public slots:
    void popSerialConnectionWindow();
    void popTerminalWindow();
    void openSerialPort(SerialPortConfig);
    void closeSerialPort();

private:
    Ui::MainWindow* ui = nullptr;
    SerialConnectionWindow* serialConnectionWindow = nullptr;
    Terminal* terminal = nullptr;

    QSerialPort serialPort;
    QLabel LB_statusbar;

};

#endif // MAINWINDOW_H
