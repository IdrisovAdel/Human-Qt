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


  std::string const & getName(const unsigned humanNumber) const;
  std::string const & getGender(const unsigned humanNumber) const;
  int getAge(const unsigned humanNumber) const;
  int getHeight(const unsigned humanNumber) const;
  int getWeight(const unsigned humanNumber) const;
  std::string const & getNationality(const unsigned humanNumber) const;
  std::string const & getBirthDate(const unsigned humanNumber) const;
  std::string const & getDeathDate(const unsigned humanNumber) const;

  Human const & getHuman(unsigned inVectorNumber) const;


private:
  explicit SingletonHuman(QObject *parent = nullptr);

  SingletonHuman (SingletonHuman const & other);
  SingletonHuman & operator=(SingletonHuman const & other);

  std::vector<Human> human;



signals:

public slots:
};

#endif // SINGLETONHUMAN_H
