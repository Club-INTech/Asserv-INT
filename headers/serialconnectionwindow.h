#ifndef SERIALCONNECTIONWINDOW_H
#define SERIALCONNECTIONWINDOW_H

#include <QMainWindow>

namespace Ui {
class SerialConnectionWindow;
}

class SerialConnectionWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SerialConnectionWindow(QWidget *parent = 0);
    ~SerialConnectionWindow();

    Ui::SerialConnectionWindow *ui;
};


#endif // SERIALCONNECTIONWINDOW_H
