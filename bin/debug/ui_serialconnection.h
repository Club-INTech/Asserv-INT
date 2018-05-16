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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialConnectionWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *CB_comList;
    QLabel *label_2;
    QComboBox *CB_baudrate;
    QLabel *label_3;
    QComboBox *CB_dataBits;
    QLabel *label_4;
    QComboBox *CB_parity;
    QLabel *label_6;
    QComboBox *CB_stopBits;
    QLabel *label_5;
    QComboBox *CB_flowControl;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PB_connect;
    QPushButton *PB_cancel;

    void setupUi(QMainWindow *SerialConnectionWindow)
    {
        if (SerialConnectionWindow->objectName().isEmpty())
            SerialConnectionWindow->setObjectName(QStringLiteral("SerialConnectionWindow"));
        SerialConnectionWindow->setWindowModality(Qt::ApplicationModal);
        SerialConnectionWindow->resize(208, 230);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SerialConnectionWindow->sizePolicy().hasHeightForWidth());
        SerialConnectionWindow->setSizePolicy(sizePolicy);
        SerialConnectionWindow->setMinimumSize(QSize(208, 230));
        SerialConnectionWindow->setMaximumSize(QSize(208, 230));
        centralwidget = new QWidget(SerialConnectionWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 191, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        CB_comList = new QComboBox(formLayoutWidget);
        CB_comList->setObjectName(QStringLiteral("CB_comList"));

        formLayout->setWidget(0, QFormLayout::FieldRole, CB_comList);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        CB_baudrate = new QComboBox(formLayoutWidget);
        CB_baudrate->addItem(QString());
        CB_baudrate->addItem(QString());
        CB_baudrate->addItem(QString());
        CB_baudrate->addItem(QString());
        CB_baudrate->addItem(QString());
        CB_baudrate->addItem(QString());
        CB_baudrate->addItem(QString());
        CB_baudrate->addItem(QString());
        CB_baudrate->setObjectName(QStringLiteral("CB_baudrate"));

        formLayout->setWidget(1, QFormLayout::FieldRole, CB_baudrate);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        CB_dataBits = new QComboBox(formLayoutWidget);
        CB_dataBits->addItem(QString());
        CB_dataBits->addItem(QString());
        CB_dataBits->addItem(QString());
        CB_dataBits->addItem(QString());
        CB_dataBits->setObjectName(QStringLiteral("CB_dataBits"));

        formLayout->setWidget(2, QFormLayout::FieldRole, CB_dataBits);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        CB_parity = new QComboBox(formLayoutWidget);
        CB_parity->addItem(QString());
        CB_parity->addItem(QString());
        CB_parity->addItem(QString());
        CB_parity->addItem(QString());
        CB_parity->addItem(QString());
        CB_parity->setObjectName(QStringLiteral("CB_parity"));

        formLayout->setWidget(3, QFormLayout::FieldRole, CB_parity);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        CB_stopBits = new QComboBox(formLayoutWidget);
        CB_stopBits->addItem(QString());
        CB_stopBits->addItem(QString());
        CB_stopBits->addItem(QString());
        CB_stopBits->setObjectName(QStringLiteral("CB_stopBits"));

        formLayout->setWidget(4, QFormLayout::FieldRole, CB_stopBits);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        CB_flowControl = new QComboBox(formLayoutWidget);
        CB_flowControl->addItem(QString());
        CB_flowControl->addItem(QString());
        CB_flowControl->addItem(QString());
        CB_flowControl->setObjectName(QStringLiteral("CB_flowControl"));

        formLayout->setWidget(5, QFormLayout::FieldRole, CB_flowControl);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 190, 191, 31));
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

        retranslateUi(SerialConnectionWindow);

        QMetaObject::connectSlotsByName(SerialConnectionWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SerialConnectionWindow)
    {
        SerialConnectionWindow->setWindowTitle(QApplication::translate("SerialConnectionWindow", "Serial connection", nullptr));
        label->setText(QApplication::translate("SerialConnectionWindow", "COM:", nullptr));
        label_2->setText(QApplication::translate("SerialConnectionWindow", "Baudrate:", nullptr));
        CB_baudrate->setItemText(0, QApplication::translate("SerialConnectionWindow", "1200", nullptr));
        CB_baudrate->setItemText(1, QApplication::translate("SerialConnectionWindow", "2400", nullptr));
        CB_baudrate->setItemText(2, QApplication::translate("SerialConnectionWindow", "4800", nullptr));
        CB_baudrate->setItemText(3, QApplication::translate("SerialConnectionWindow", "9600", nullptr));
        CB_baudrate->setItemText(4, QApplication::translate("SerialConnectionWindow", "19200", nullptr));
        CB_baudrate->setItemText(5, QApplication::translate("SerialConnectionWindow", "38400", nullptr));
        CB_baudrate->setItemText(6, QApplication::translate("SerialConnectionWindow", "57600", nullptr));
        CB_baudrate->setItemText(7, QApplication::translate("SerialConnectionWindow", "115200", nullptr));

        CB_baudrate->setCurrentText(QApplication::translate("SerialConnectionWindow", "9600", nullptr));
        label_3->setText(QApplication::translate("SerialConnectionWindow", "Data bits:", nullptr));
        CB_dataBits->setItemText(0, QApplication::translate("SerialConnectionWindow", "5", nullptr));
        CB_dataBits->setItemText(1, QApplication::translate("SerialConnectionWindow", "6", nullptr));
        CB_dataBits->setItemText(2, QApplication::translate("SerialConnectionWindow", "7", nullptr));
        CB_dataBits->setItemText(3, QApplication::translate("SerialConnectionWindow", "8", nullptr));

        CB_dataBits->setCurrentText(QApplication::translate("SerialConnectionWindow", "8", nullptr));
        label_4->setText(QApplication::translate("SerialConnectionWindow", "Parity:", nullptr));
        CB_parity->setItemText(0, QApplication::translate("SerialConnectionWindow", "None", nullptr));
        CB_parity->setItemText(1, QApplication::translate("SerialConnectionWindow", "Even", nullptr));
        CB_parity->setItemText(2, QApplication::translate("SerialConnectionWindow", "Odd", nullptr));
        CB_parity->setItemText(3, QApplication::translate("SerialConnectionWindow", "Space", nullptr));
        CB_parity->setItemText(4, QApplication::translate("SerialConnectionWindow", "Mark", nullptr));

        label_6->setText(QApplication::translate("SerialConnectionWindow", "Stop bits:", nullptr));
        CB_stopBits->setItemText(0, QApplication::translate("SerialConnectionWindow", "1", nullptr));
        CB_stopBits->setItemText(1, QApplication::translate("SerialConnectionWindow", "1.5", nullptr));
        CB_stopBits->setItemText(2, QApplication::translate("SerialConnectionWindow", "2", nullptr));

        label_5->setText(QApplication::translate("SerialConnectionWindow", "Flow control:", nullptr));
        CB_flowControl->setItemText(0, QApplication::translate("SerialConnectionWindow", "None", nullptr));
        CB_flowControl->setItemText(1, QApplication::translate("SerialConnectionWindow", "Hardware", nullptr));
        CB_flowControl->setItemText(2, QApplication::translate("SerialConnectionWindow", "Software", nullptr));

        PB_connect->setText(QApplication::translate("SerialConnectionWindow", "Connect", nullptr));
        PB_cancel->setText(QApplication::translate("SerialConnectionWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialConnectionWindow: public Ui_SerialConnectionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALCONNECTION_H
