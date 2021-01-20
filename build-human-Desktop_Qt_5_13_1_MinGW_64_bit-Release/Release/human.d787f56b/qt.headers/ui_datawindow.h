/********************************************************************************
** Form generated from reading UI file 'datawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAWINDOW_H
#define UI_DATAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dataWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableWidget *humanTableWidget;
    QPushButton *backPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dataWindow)
    {
        if (dataWindow->objectName().isEmpty())
            dataWindow->setObjectName(QString::fromUtf8("dataWindow"));
        dataWindow->resize(800, 600);
        centralwidget = new QWidget(dataWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        humanTableWidget = new QTableWidget(centralwidget);
        humanTableWidget->setObjectName(QString::fromUtf8("humanTableWidget"));

        gridLayout->addWidget(humanTableWidget, 0, 0, 1, 1);

        backPushButton = new QPushButton(centralwidget);
        backPushButton->setObjectName(QString::fromUtf8("backPushButton"));

        gridLayout->addWidget(backPushButton, 1, 0, 1, 1);

        dataWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dataWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        dataWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(dataWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        dataWindow->setStatusBar(statusbar);

        retranslateUi(dataWindow);

        QMetaObject::connectSlotsByName(dataWindow);
    } // setupUi

    void retranslateUi(QMainWindow *dataWindow)
    {
        dataWindow->setWindowTitle(QCoreApplication::translate("dataWindow", "MainWindow", nullptr));
        backPushButton->setText(QCoreApplication::translate("dataWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dataWindow: public Ui_dataWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAWINDOW_H
