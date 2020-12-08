#include "datawindow.h"
#include "ui_datawindow.h"

dataWindow::dataWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::dataWindow)
{
  ui->setupUi(this);
  if(SingletonHuman::instance().humanVectorSize())
    {
      ui->humanTableWidget->setRowCount(static_cast<int>(SingletonHuman::instance().humanVectorSize()));
      ui->humanTableWidget->setColumnCount(8);
      ui->humanTableWidget->setHorizontalHeaderLabels(QStringList() << "Имя" << "Пол" << "Возраст" << "Рост" << "Вес" << "Национальность"
                                                      << "Дата рождения" << "Дата смерти");
      for(int temp1 = 0; temp1 < ui->humanTableWidget->rowCount(); ++temp1)
        {
          QTableWidgetItem * newItem = new QTableWidgetItem(QString::fromStdString(SingletonHuman::instance().getName(static_cast<unsigned>(temp1))));
          ui->humanTableWidget->setItem(temp1, 0, newItem);
          newItem = new QTableWidgetItem(QString::fromStdString(SingletonHuman::instance().getGender(static_cast<unsigned>(temp1))));
          ui->humanTableWidget->setItem(temp1, 1, newItem);
          newItem = new QTableWidgetItem(QString::number(SingletonHuman::instance().getAge(static_cast<unsigned>(temp1))));
          ui->humanTableWidget->setItem(temp1, 2, newItem);
          newItem = new QTableWidgetItem(QString::number(SingletonHuman::instance().getHeight(static_cast<unsigned>(temp1))));
          ui->humanTableWidget->setItem(temp1, 3, newItem);
          newItem = new QTableWidgetItem(QString::number(SingletonHuman::instance().getWeight(static_cast<unsigned>(temp1))));
          ui->humanTableWidget->setItem(temp1, 4, newItem);
          newItem = new QTableWidgetItem(QString::fromStdString(SingletonHuman::instance().getNationality(static_cast<unsigned>(temp1))));
          ui->humanTableWidget->setItem(temp1, 5, newItem);
          newItem = new QTableWidgetItem(QString::fromStdString(SingletonHuman::instance().getBirthDate(static_cast<unsigned>(temp1))));
          ui->humanTableWidget->setItem(temp1, 6, newItem);
          newItem = new QTableWidgetItem(QString::fromStdString(SingletonHuman::instance().getDeathDate(static_cast<unsigned>(temp1))));
          ui->humanTableWidget->setItem(temp1, 7, newItem);
        }
    }
}

dataWindow::~dataWindow()
{
  delete ui;
}



void dataWindow::on_backPushButton_clicked()
{
  hide();
  parentWidget()->show();
}
