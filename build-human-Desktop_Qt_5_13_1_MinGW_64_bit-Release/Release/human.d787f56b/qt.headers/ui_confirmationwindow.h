/********************************************************************************
** Form generated from reading UI file 'confirmationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMATIONWINDOW_H
#define UI_CONFIRMATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfirmationWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *weightLabel;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_5;
    QPushButton *cancelPushButton;
    QLabel *nameLabel;
    QLabel *label_4;
    QPushButton *savePushButton;
    QLabel *ageLabel;
    QLabel *heightLabel;
    QLabel *deathDateLabel;
    QLabel *birthDateLabel;
    QLabel *label_2;
    QLabel *label;
    QLabel *nationalityLabel;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *genderLabel;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ConfirmationWindow)
    {
        if (ConfirmationWindow->objectName().isEmpty())
            ConfirmationWindow->setObjectName(QString::fromUtf8("ConfirmationWindow"));
        ConfirmationWindow->resize(548, 397);
        centralwidget = new QWidget(ConfirmationWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        weightLabel = new QLabel(centralwidget);
        weightLabel->setObjectName(QString::fromUtf8("weightLabel"));

        gridLayout->addWidget(weightLabel, 5, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        cancelPushButton = new QPushButton(centralwidget);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));

        gridLayout->addWidget(cancelPushButton, 11, 1, 1, 1);

        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 1, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        savePushButton = new QPushButton(centralwidget);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));

        gridLayout->addWidget(savePushButton, 10, 1, 1, 1);

        ageLabel = new QLabel(centralwidget);
        ageLabel->setObjectName(QString::fromUtf8("ageLabel"));

        gridLayout->addWidget(ageLabel, 3, 1, 1, 1);

        heightLabel = new QLabel(centralwidget);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));

        gridLayout->addWidget(heightLabel, 4, 1, 1, 1);

        deathDateLabel = new QLabel(centralwidget);
        deathDateLabel->setObjectName(QString::fromUtf8("deathDateLabel"));

        gridLayout->addWidget(deathDateLabel, 8, 1, 1, 1);

        birthDateLabel = new QLabel(centralwidget);
        birthDateLabel->setObjectName(QString::fromUtf8("birthDateLabel"));

        gridLayout->addWidget(birthDateLabel, 7, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nationalityLabel = new QLabel(centralwidget);
        nationalityLabel->setObjectName(QString::fromUtf8("nationalityLabel"));

        gridLayout->addWidget(nationalityLabel, 6, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        genderLabel = new QLabel(centralwidget);
        genderLabel->setObjectName(QString::fromUtf8("genderLabel"));

        gridLayout->addWidget(genderLabel, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 1, 1, 1);

        ConfirmationWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ConfirmationWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 548, 26));
        ConfirmationWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ConfirmationWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ConfirmationWindow->setStatusBar(statusbar);

        retranslateUi(ConfirmationWindow);

        QMetaObject::connectSlotsByName(ConfirmationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ConfirmationWindow)
    {
        ConfirmationWindow->setWindowTitle(QCoreApplication::translate("ConfirmationWindow", "MainWindow", nullptr));
        weightLabel->setText(QCoreApplication::translate("ConfirmationWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ConfirmationWindow", "\320\237\320\276\320\273", nullptr));
        label_8->setText(QCoreApplication::translate("ConfirmationWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_9->setText(QCoreApplication::translate("ConfirmationWindow", "\320\224\320\260\321\202\320\260 \321\201\320\274\320\265\321\200\321\202\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("ConfirmationWindow", "\320\222\320\265\321\201", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("ConfirmationWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        nameLabel->setText(QCoreApplication::translate("ConfirmationWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("ConfirmationWindow", "\320\240\320\276\321\201\321\202", nullptr));
        savePushButton->setText(QCoreApplication::translate("ConfirmationWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        ageLabel->setText(QCoreApplication::translate("ConfirmationWindow", "TextLabel", nullptr));
        heightLabel->setText(QCoreApplication::translate("ConfirmationWindow", "TextLabel", nullptr));
        deathDateLabel->setText(QCoreApplication::translate("ConfirmationWindow", "TextLabel", nullptr));
        birthDateLabel->setText(QCoreApplication::translate("ConfirmationWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("ConfirmationWindow", "\320\230\320\274\321\217", nullptr));
        label->setText(QCoreApplication::translate("ConfirmationWindow", "\320\222\320\262\320\265\320\264\320\265\320\275\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265:", nullptr));
        nationalityLabel->setText(QCoreApplication::translate("ConfirmationWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("ConfirmationWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        label_6->setText(QCoreApplication::translate("ConfirmationWindow", "\320\235\320\260\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        genderLabel->setText(QCoreApplication::translate("ConfirmationWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmationWindow: public Ui_ConfirmationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMATIONWINDOW_H
