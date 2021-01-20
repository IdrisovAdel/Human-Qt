/********************************************************************************
** Form generated from reading UI file 'fillhuman.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILLHUMAN_H
#define UI_FILLHUMAN_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_FillHuman
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_13;
    QLabel *label;
    QLabel *label_12;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *NameLineEdit;
    QSpinBox *weightSetSpinBox;
    QLabel *label_3;
    QSpinBox *heightSetSpinBox;
    QLabel *label_11;
    QComboBox *nationalityChooseComboBox;
    QDateEdit *deathDaydateEdit;
    QComboBox *genderChooseComboBox;
    QSpinBox *ageSetSpinBox;
    QDateEdit *birthDaydateEdit;
    QPushButton *enterDeathDayPushButton;
    QPushButton *cancelEnteringDeathDayPushButton;
    QPushButton *savePushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *FillHuman)
    {
        if (FillHuman->objectName().isEmpty())
            FillHuman->setObjectName(QString::fromUtf8("FillHuman"));
        FillHuman->resize(578, 402);
        gridLayout = new QGridLayout(FillHuman);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(FillHuman);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 3);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 6, 0, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 8, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 5, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        NameLineEdit = new QLineEdit(groupBox);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));

        gridLayout_2->addWidget(NameLineEdit, 1, 2, 1, 2);

        weightSetSpinBox = new QSpinBox(groupBox);
        weightSetSpinBox->setObjectName(QString::fromUtf8("weightSetSpinBox"));
        weightSetSpinBox->setMaximum(300);

        gridLayout_2->addWidget(weightSetSpinBox, 5, 2, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        heightSetSpinBox = new QSpinBox(groupBox);
        heightSetSpinBox->setObjectName(QString::fromUtf8("heightSetSpinBox"));

        gridLayout_2->addWidget(heightSetSpinBox, 4, 2, 1, 2);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 7, 0, 1, 1);

        nationalityChooseComboBox = new QComboBox(groupBox);
        nationalityChooseComboBox->addItem(QString());
        nationalityChooseComboBox->addItem(QString());
        nationalityChooseComboBox->addItem(QString());
        nationalityChooseComboBox->addItem(QString());
        nationalityChooseComboBox->addItem(QString());
        nationalityChooseComboBox->addItem(QString());
        nationalityChooseComboBox->addItem(QString());
        nationalityChooseComboBox->addItem(QString());
        nationalityChooseComboBox->addItem(QString());
        nationalityChooseComboBox->addItem(QString());
        nationalityChooseComboBox->addItem(QString());
        nationalityChooseComboBox->addItem(QString());
        nationalityChooseComboBox->setObjectName(QString::fromUtf8("nationalityChooseComboBox"));

        gridLayout_2->addWidget(nationalityChooseComboBox, 6, 2, 1, 2);

        deathDaydateEdit = new QDateEdit(groupBox);
        deathDaydateEdit->setObjectName(QString::fromUtf8("deathDaydateEdit"));
        deathDaydateEdit->setDate(QDate(1790, 1, 1));

        gridLayout_2->addWidget(deathDaydateEdit, 8, 3, 1, 1);

        genderChooseComboBox = new QComboBox(groupBox);
        genderChooseComboBox->addItem(QString());
        genderChooseComboBox->addItem(QString());
        genderChooseComboBox->setObjectName(QString::fromUtf8("genderChooseComboBox"));

        gridLayout_2->addWidget(genderChooseComboBox, 2, 2, 1, 2);

        ageSetSpinBox = new QSpinBox(groupBox);
        ageSetSpinBox->setObjectName(QString::fromUtf8("ageSetSpinBox"));
        ageSetSpinBox->setMaximum(222);

        gridLayout_2->addWidget(ageSetSpinBox, 3, 2, 1, 2);

        birthDaydateEdit = new QDateEdit(groupBox);
        birthDaydateEdit->setObjectName(QString::fromUtf8("birthDaydateEdit"));

        gridLayout_2->addWidget(birthDaydateEdit, 7, 2, 1, 2);

        enterDeathDayPushButton = new QPushButton(groupBox);
        enterDeathDayPushButton->setObjectName(QString::fromUtf8("enterDeathDayPushButton"));

        gridLayout_2->addWidget(enterDeathDayPushButton, 8, 1, 1, 1);

        cancelEnteringDeathDayPushButton = new QPushButton(groupBox);
        cancelEnteringDeathDayPushButton->setObjectName(QString::fromUtf8("cancelEnteringDeathDayPushButton"));

        gridLayout_2->addWidget(cancelEnteringDeathDayPushButton, 8, 2, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 2);

        savePushButton = new QPushButton(FillHuman);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));

        gridLayout->addWidget(savePushButton, 2, 0, 1, 2);

        cancelPushButton = new QPushButton(FillHuman);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));

        gridLayout->addWidget(cancelPushButton, 3, 0, 1, 2);


        retranslateUi(FillHuman);

        QMetaObject::connectSlotsByName(FillHuman);
    } // setupUi

    void retranslateUi(QDialog *FillHuman)
    {
        FillHuman->setWindowTitle(QCoreApplication::translate("FillHuman", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FillHuman", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\277\320\276\320\273\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("FillHuman", "* - \320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \320\277\320\276\320\273\321\217", nullptr));
        label_13->setText(QCoreApplication::translate("FillHuman", "\320\235\320\260\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214*", nullptr));
        label->setText(QCoreApplication::translate("FillHuman", "\320\230\320\274\321\217*", nullptr));
        label_12->setText(QCoreApplication::translate("FillHuman", "\320\224\320\260\321\202\320\260 \321\201\320\274\320\265\321\200\321\202\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("FillHuman", "\320\222\320\265\321\201*", nullptr));
        label_4->setText(QCoreApplication::translate("FillHuman", "\320\240\320\276\321\201\321\202*", nullptr));
        label_2->setText(QCoreApplication::translate("FillHuman", "\320\237\320\276\320\273*", nullptr));
        weightSetSpinBox->setSuffix(QString());
        label_3->setText(QCoreApplication::translate("FillHuman", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202*", nullptr));
        label_11->setText(QCoreApplication::translate("FillHuman", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217*", nullptr));
        nationalityChooseComboBox->setItemText(0, QCoreApplication::translate("FillHuman", "\320\240\321\203\321\201\321\201\320\272\320\270\320\265", nullptr));
        nationalityChooseComboBox->setItemText(1, QCoreApplication::translate("FillHuman", "\320\242\320\260\321\202\320\260\321\200\321\213", nullptr));
        nationalityChooseComboBox->setItemText(2, QCoreApplication::translate("FillHuman", "\320\243\320\272\321\200\320\260\320\270\320\275\321\206\321\213", nullptr));
        nationalityChooseComboBox->setItemText(3, QCoreApplication::translate("FillHuman", "\320\221\320\260\321\210\320\272\320\270\321\200\321\213", nullptr));
        nationalityChooseComboBox->setItemText(4, QCoreApplication::translate("FillHuman", "\320\247\321\203\320\262\320\260\321\210\320\270", nullptr));
        nationalityChooseComboBox->setItemText(5, QCoreApplication::translate("FillHuman", "\320\247\320\265\321\207\320\265\320\275\321\206\321\213", nullptr));
        nationalityChooseComboBox->setItemText(6, QCoreApplication::translate("FillHuman", "\320\220\321\200\320\274\321\217\320\275\320\265", nullptr));
        nationalityChooseComboBox->setItemText(7, QCoreApplication::translate("FillHuman", "\320\234\320\276\321\200\320\264\320\262\320\260", nullptr));
        nationalityChooseComboBox->setItemText(8, QCoreApplication::translate("FillHuman", "\320\220\320\262\320\260\321\200\321\206\321\213", nullptr));
        nationalityChooseComboBox->setItemText(9, QCoreApplication::translate("FillHuman", "\320\221\320\265\320\273\320\276\321\200\321\203\321\201\321\213", nullptr));
        nationalityChooseComboBox->setItemText(10, QCoreApplication::translate("FillHuman", "\320\232\320\260\320\267\320\260\321\205\320\270", nullptr));
        nationalityChooseComboBox->setItemText(11, QCoreApplication::translate("FillHuman", "\320\243\320\264\320\274\321\203\321\200\321\202\321\213", nullptr));

        genderChooseComboBox->setItemText(0, QCoreApplication::translate("FillHuman", "\320\234\321\203\320\266\321\201\320\272\320\276\320\271", nullptr));
        genderChooseComboBox->setItemText(1, QCoreApplication::translate("FillHuman", "\320\226\320\265\320\275\321\201\320\272\320\270\320\271 ", nullptr));

        enterDeathDayPushButton->setText(QCoreApplication::translate("FillHuman", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\264\320\260\321\202\321\203 \321\201\320\274\320\265\321\200\321\202\320\270", nullptr));
        cancelEnteringDeathDayPushButton->setText(QCoreApplication::translate("FillHuman", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214 \320\262\320\262\320\276\320\264", nullptr));
        savePushButton->setText(QCoreApplication::translate("FillHuman", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("FillHuman", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\275\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FillHuman: public Ui_FillHuman {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILLHUMAN_H
