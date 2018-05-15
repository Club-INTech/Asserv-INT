#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../headers/serialconnectionwindow.h"

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

private:
    Ui::MainWindow* ui = nullptr;
    SerialConnectionWindow* serialConnectionWindow = nullptr;
};

#endif // MAINWINDOW_H
