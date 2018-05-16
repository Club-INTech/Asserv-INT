#ifndef TERMINAL_H
#define TERMINAL_H

#include <QMainWindow>
#include <QSerialPort>
#include <QScrollBar>
#include "utils.h"

namespace Ui {
class Terminal;
}

class Terminal : public QMainWindow
{
    Q_OBJECT
signals:
    void closed(bool);
public:
    explicit Terminal(QSerialPort*, QWidget* parent = nullptr);
    ~Terminal();
private slots:
    void readData();
    void writeData();
private:
    QSerialPort* serialPort = nullptr;
    Ui::Terminal* ui;
    void closeEvent(QCloseEvent*);
};

#endif // TERMINAL_H
