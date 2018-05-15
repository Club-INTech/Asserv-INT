/********************************************************************************
** Form generated from reading UI file 'serialconnection.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALCONNECTION_H
#define UI_SERIALCONNECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialConnectionWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QComboBox *comboBox_4;
    QLabel *label_6;
    QComboBox *comboBox_6;
    QLabel *label_5;
    QComboBox *comboBox_5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PB_connect;
    QPushButton *PB_cancel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SerialConnectionWindow)
    {
        if (SerialConnectionWindow->objectName().isEmpty())
            SerialConnectionWindow->setObjectName(QStringLiteral("SerialConnectionWindow"));
        SerialConnectionWindow->resize(208, 240);
        centralwidget = new QWidget(SerialConnectionWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 0, 191, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBox_2 = new QComboBox(formLayoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBox_3 = new QComboBox(formLayoutWidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        comboBox_4 = new QComboBox(formLayoutWidget);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox_4);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        comboBox_6 = new QComboBox(formLayoutWidget);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_6);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        comboBox_5 = new QComboBox(formLayoutWidget);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        formLayout->setWidget(5, QFormLayout::FieldRole, comboBox_5);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 180, 191, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PB_connect = new QPushButton(horizontalLayoutWidget);
        PB_connect->setObjectName(QStringLiteral("PB_connect"));
        PB_connect->setEnabled(false);

        horizontalLayout_2->addWidget(PB_connect);

        PB_cancel = new QPushButton(horizontalLayoutWidget);
        PB_cancel->setObjectName(QStringLiteral("PB_cancel"));

        horizontalLayout_2->addWidget(PB_cancel);

        SerialConnectionWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SerialConnectionWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SerialConnectionWindow->setStatusBar(statusbar);

        retranslateUi(SerialConnectionWindow);

        QMetaObject::connectSlotsByName(SerialConnectionWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SerialConnectionWindow)
    {
        SerialConnectionWindow->setWindowTitle(QApplication::translate("SerialConnectionWindow", "Serial connection", nullptr));
        label->setText(QApplication::translate("SerialConnectionWindow", "COM:", nullptr));
        label_2->setText(QApplication::translate("SerialConnectionWindow", "Baudrate:", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("SerialConnectionWindow", "1200", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("SerialConnectionWindow", "2400", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("SerialConnectionWindow", "4800", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("SerialConnectionWindow", "9600", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("SerialConnectionWindow", "19200", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("SerialConnectionWindow", "38400", nullptr));
        comboBox_2->setItemText(6, QApplication::translate("SerialConnectionWindow", "57600", nullptr));
        comboBox_2->setItemText(7, QApplication::translate("SerialConnectionWindow", "115200", nullptr));

        comboBox_2->setCurrentText(QApplication::translate("SerialConnectionWindow", "115200", nullptr));
        label_3->setText(QApplication::translate("SerialConnectionWindow", "Data bits:", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("SerialConnectionWindow", "5", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("SerialConnectionWindow", "6", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("SerialConnectionWindow", "7", nullptr));
        comboBox_3->setItemText(3, QApplication::translate("SerialConnectionWindow", "8", nullptr));

        comboBox_3->setCurrentText(QApplication::translate("SerialConnectionWindow", "8", nullptr));
        label_4->setText(QApplication::translate("SerialConnectionWindow", "Parity:", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("SerialConnectionWindow", "None", nullptr));
        comboBox_4->setItemText(1, QApplication::translate("SerialConnectionWindow", "Even", nullptr));
        comboBox_4->setItemText(2, QApplication::translate("SerialConnectionWindow", "Odd", nullptr));
        comboBox_4->setItemText(3, QApplication::translate("SerialConnectionWindow", "Space", nullptr));
        comboBox_4->setItemText(4, QApplication::translate("SerialConnectionWindow", "Mark", nullptr));

        label_6->setText(QApplication::translate("SerialConnectionWindow", "Stop bits:", nullptr));
        comboBox_6->setItemText(0, QApplication::translate("SerialConnectionWindow", "1", nullptr));
        comboBox_6->setItemText(1, QApplication::translate("SerialConnectionWindow", "1.5", nullptr));
        comboBox_6->setItemText(2, QApplication::translate("SerialConnectionWindow", "2", nullptr));

        label_5->setText(QApplication::translate("SerialConnectionWindow", "Flow control:", nullptr));
        comboBox_5->setItemText(0, QApplication::translate("SerialConnectionWindow", "None", nullptr));
        comboBox_5->setItemText(1, QApplication::translate("SerialConnectionWindow", "Hardware", nullptr));
        comboBox_5->setItemText(2, QApplication::translate("SerialConnectionWindow", "Software", nullptr));

        PB_connect->setText(QApplication::translate("SerialConnectionWindow", "Connect", nullptr));
        PB_cancel->setText(QApplication::translate("SerialConnectionWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialConnectionWindow: public Ui_SerialConnectionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALCONNECTION_H
