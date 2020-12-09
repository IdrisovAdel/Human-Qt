#ifndef SINGLETONHUMAN_H
#define SINGLETONHUMAN_H

#include <QObject>
#include "human.h"
#include <vector>
#include <QDebug>

class SingletonHuman : public QObject
{
  Q_OBJECT
public:
  static SingletonHuman &instance();

  void toHumanVectorAdd(Human const & instance);

  size_t humanVectorSize();

  Human const & getHuman(unsigned inVectorNumber) const;

  const Human fromString(std::string const & line) const;
  const std::string toString(Human const & tempHuman) const;


private:
  explicit SingletonHuman(QObject *parent = nullptr);

  SingletonHuman (SingletonHuman const & other);
  SingletonHuman & operator=(SingletonHuman const & other);

  std::vector<Human> human;




signals:

public slots:
};

#endif // SINGLETONHUMAN_H
