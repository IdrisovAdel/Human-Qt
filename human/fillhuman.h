#ifndef FILLHUMAN_H
#define FILLHUMAN_H

#include <QDialog>
#include <QRegExp>
#include <QDebug>
#include <QMessageBox>
#include "human.h"
#include "confirmationwindow.h"

namespace Ui {
  class FillHuman;
}

class FillHuman : public QDialog
{
  Q_OBJECT

public:
  explicit FillHuman(QWidget *parent = nullptr);
  ~FillHuman();
public slots:
private slots:

  void on_savePushButton_clicked();

  //void on_NameLineEdit_textChanged(const QString &arg1);

  void on_enterDeathDayPushButton_clicked();

  void on_cancelEnteringDeathDayPushButton_clicked();

  //void on_birthDaydateEdit_userDateChanged(const QDate &date);

  void on_cancelPushButton_clicked();

private:
  Ui::FillHuman *ui;
  Human human;
  ConfirmationWindow * confirmation;
};

#endif // FILLHUMAN_H
