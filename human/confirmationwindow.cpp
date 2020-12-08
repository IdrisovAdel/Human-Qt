#include "confirmationwindow.h"
#include "ui_confirmationwindow.h"
#include <QDebug>

ConfirmationWindow::ConfirmationWindow(QWidget *parent, Human const & human) :
  QMainWindow(parent),
  ui(new Ui::ConfirmationWindow), human(human)
{
  ui->setupUi(this);
  ui->nameLabel->setText(QString::fromStdString(human.Human::getName()));
  ui->genderLabel->setText(QString::fromStdString(human.Human::getGender()));
  ui->ageLabel->setText(QString::number(human.Human::getAge()));
  ui->heightLabel->setText(QString::number(human.Human::getHeight()));
  ui->weightLabel->setText((QString::number(human.Human::getWeight())));
  ui->nationalityLabel->setText(QString::fromStdString(human.Human::getNationality()));
  ui->birthDateLabel->setText(QString::fromStdString(human.Human::getBirthDate()));
  ui->deathDateLabel->setText(QString::fromStdString(human.Human::getDeathDate()));
}

ConfirmationWindow::~ConfirmationWindow()
{
  delete ui;
}



void ConfirmationWindow::on_cancelPushButton_clicked()
{
    hide();
    parentWidget()->show();
    QString::fromUtf8("");
}

void ConfirmationWindow::on_savePushButton_clicked()
{
    SingletonHuman::instance().toHumanVectorAdd(human);
    qDebug() << QString::fromStdString(human.getName()) << QString::fromStdString(human.getGender()) << human.getAge()
                  << human.getHeight() << human.getWeight() << QString::fromStdString(human.getNationality()) << QString::fromStdString(human.getBirthDate())
                  << QString::fromStdString(human.getDeathDate());
    hide();
    parentWidget()->parentWidget()->show();
    qDebug() << "Data saved!";
}
