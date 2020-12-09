#include "datawindow.h"
#include "ui_datawindow.h"

dataWindow::dataWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::dataWindow)
{
  ui->setupUi(this);
  //if(SingletonHuman::instance().humanVectorSize())
    {
      ui->humanTableWidget->setRowCount(static_cast<int>(SingletonHuman::instance().humanVectorSize()));
      ui->humanTableWidget->setColumnCount(8);
      ui->humanTableWidget->setHorizontalHeaderLabels(QStringList() << "Имя" << "Пол" << "Возраст" << "Рост" << "Вес" << "Национальность"
                                                      << "Дата рождения" << "Дата смерти");
      for(int temp1 = 0; temp1 < ui->humanTableWidget->rowCount(); ++temp1)
        {
          Human human = SingletonHuman::instance().getHuman(static_cast<unsigned>(temp1));
          QTableWidgetItem * newItem = new QTableWidgetItem(QString::fromStdString(human.getName()));
          ui->humanTableWidget->setItem(temp1, 0, newItem);
          newItem = new QTableWidgetItem(QString::fromStdString(human.getGender()));
          ui->humanTableWidget->setItem(temp1, 1, newItem);
          newItem = new QTableWidgetItem(QString::number(human.getAge()));
          ui->humanTableWidget->setItem(temp1, 2, newItem);
          newItem = new QTableWidgetItem(QString::number(human.getHeight()));
          ui->humanTableWidget->setItem(temp1, 3, newItem);
          newItem = new QTableWidgetItem(QString::number(human.getWeight()));
          ui->humanTableWidget->setItem(temp1, 4, newItem);
          newItem = new QTableWidgetItem(QString::fromStdString(human.getNationality()));
          ui->humanTableWidget->setItem(temp1, 5, newItem);
          newItem = new QTableWidgetItem(QString::fromStdString(human.getBirthDate()));
          ui->humanTableWidget->setItem(temp1, 6, newItem);
          newItem = new QTableWidgetItem(QString::fromStdString(human.getDeathDate()));
          ui->humanTableWidget->setItem(temp1, 7, newItem);
        }
      SingletonHuman::instance().fromString("Имя Пол 23 34 45  Национальность Дата рождения Дата смерти");
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
