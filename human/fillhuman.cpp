#include "fillhuman.h"
#include "ui_fillhuman.h"

FillHuman::FillHuman(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::FillHuman)
{
  ui->setupUi(this);

  ui->ageSetSpinBox->setMaximum(160);
  ui->heightSetSpinBox->setMaximum(270);
  ui->weightSetSpinBox->setMaximum(250);
  ui->deathDaydateEdit->hide();
  ui->cancelEnteringDeathDayPushButton->hide();
  human.setDeathDate("-");
  ui->deathDaydateEdit->clearMinimumDate();





//  connect(ui->savePushButton, &QPushButton::clicked, [=](){

//    });
}

FillHuman::~FillHuman()
{
  delete ui;
}




void FillHuman::on_savePushButton_clicked()
{
  QRegExp nameRx("^(([A-ZА-Яa-zа-я][a-zа-я]*)|([A-ZА-Я]*))$");
  if((ui->NameLineEdit->text().toStdString() == "") || !nameRx.exactMatch(ui->NameLineEdit->text()))
    {
      QMessageBox::critical(this, "Ошибка", "Имя введено неверно!", QMessageBox::Cancel);
      return;
    }
  else human.setName(ui->NameLineEdit->text().toStdString());

  human.setGender(ui->genderChooseComboBox->currentText().toStdString());
  human.setNationality(ui->nationalityChooseComboBox->currentText().toStdString());

  if(ui->ageSetSpinBox->value() == 0)
    {
      QMessageBox::critical(this, "Ошибка", "Введите возраст!", QMessageBox::Cancel);
      return;
    }
  else human.setAge(ui->ageSetSpinBox->value());

  if(ui->heightSetSpinBox->value() == 0)
    {
      QMessageBox::critical(this, "Ошибка", "Введите рост!", QMessageBox::Cancel);
      return;
    }
  else human.setHeight(ui->heightSetSpinBox->value());

  if(ui->weightSetSpinBox->value() == 0)
    {
      QMessageBox::critical(this, "Ошибка", "Введите вес!", QMessageBox::Cancel);
      return;
    }
  else human.setWeight(ui->weightSetSpinBox->value());

  human.setBirthDate(ui->birthDaydateEdit->date().toString("dd - MM - yyyy").toStdString());

  ui->deathDaydateEdit->setMinimumDate(ui->birthDaydateEdit->date());
  if(!ui->deathDaydateEdit->isHidden() && ui->deathDaydateEdit->date() != ui->birthDaydateEdit->date())
    {
      human.setDeathDate(ui->deathDaydateEdit->date().toString("dd - MM - yyyy").toStdString());
    }
  else if(!ui->deathDaydateEdit->isHidden() && ui->deathDaydateEdit->date() == ui->birthDaydateEdit->date())
    {
      QMessageBox::critical(this, "Ошибка", "Дата смерти введена неверно!", QMessageBox::Cancel);
      return;
    }

  qDebug() << QString::fromStdString(human.getName()) << QString::fromStdString(human.getGender()) << human.getAge()
           << human.getHeight() << human.getWeight() << QString::fromStdString(human.getNationality()) << QString::fromStdString(human.getBirthDate())
           << QString::fromStdString(human.getDeathDate());
  hide();
  confirmation = new ConfirmationWindow(this, human);
  confirmation->show();
}




void FillHuman::on_enterDeathDayPushButton_clicked()
{
    human.setBirthDate(ui->birthDaydateEdit->date().toString("dd - MM - yyyy").toStdString());
    ui->deathDaydateEdit->setMinimumDate(ui->birthDaydateEdit->date());
    ui->deathDaydateEdit->show();
    ui->cancelEnteringDeathDayPushButton->show();
    ui->enterDeathDayPushButton->hide();
    qDebug() << QString::fromStdString(human.getName()) << QString::fromStdString(human.getGender()) << human.getAge()
             << human.getHeight() << human.getWeight() << QString::fromStdString(human.getNationality()) << QString::fromStdString(human.getBirthDate())
             << QString::fromStdString(human.getDeathDate());
}

void FillHuman::on_cancelEnteringDeathDayPushButton_clicked()
{
    ui->enterDeathDayPushButton->show();
    ui->deathDaydateEdit->hide();
    ui->cancelEnteringDeathDayPushButton->hide();
    human.setDeathDate("-");
    qDebug() << QString::fromStdString(human.getName()) << QString::fromStdString(human.getGender()) << human.getAge()
             << human.getHeight() << human.getWeight() << QString::fromStdString(human.getNationality()) << QString::fromStdString(human.getBirthDate())
             << QString::fromStdString(human.getDeathDate());
}


/*void FillHuman::on_birthDaydateEdit_userDateChanged(const QDate &date)
{

  ui->deathDaydateEdit->clearMinimumDate();
    ui->deathDaydateEdit->setMinimumDate(date);
}*/

void FillHuman::on_cancelPushButton_clicked()
{
    hide();
    parentWidget()->show();
}
