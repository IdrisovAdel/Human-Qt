#include "singletonhuman.h"
SingletonHuman &SingletonHuman::instance()
{
  static SingletonHuman interface;
  return interface;
}

void SingletonHuman::toHumanVectorAdd(const Human &instance)
{
  human.push_back(instance);
}

size_t SingletonHuman::humanVectorSize()
{
  return human.size();
}

const std::string &SingletonHuman::getName(const unsigned humanNumber) const
{
  return human[humanNumber].getName();
}

const std::string &SingletonHuman::getGender(const unsigned humanNumber) const
{
  return human[humanNumber].getGender();
}

int SingletonHuman::getAge(const unsigned humanNumber) const
{
  return human[humanNumber].getAge();
}

int SingletonHuman::getHeight(const unsigned humanNumber) const
{
  return human[humanNumber].getHeight();
}

int SingletonHuman::getWeight(const unsigned humanNumber) const
{
  return human[humanNumber].getWeight();
}

const std::string &SingletonHuman::getNationality(const unsigned humanNumber) const
{
  return human[humanNumber].getNationality();
}

const std::string &SingletonHuman::getBirthDate(const unsigned humanNumber) const
{
  return human[humanNumber].getBirthDate();
}

const std::string &SingletonHuman::getDeathDate(const unsigned humanNumber) const
{
  return human[humanNumber].getDeathDate();
}


SingletonHuman::SingletonHuman(QObject *parent) : QObject(parent)
{
}
