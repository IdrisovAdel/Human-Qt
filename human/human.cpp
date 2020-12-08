#include "human.h"


Human::Human(/*QObject *parent,*/ const std::string newName, const std::string newGender, const int &newAge,
             const int &newHeight, const int &newWeight, const std::string newNationality, const std::string newBirthDate,
             const std::string newDeathDate) : /*QObject(parent),*/ name(newName), gender(newGender), age(newAge),
  height(newHeight), weight(newWeight), nationality(newNationality), birthDate(newBirthDate), deathDate(newDeathDate) {}

Human::Human(const Human &other)
{
  name = other.name;
  gender = other.gender;
  age = other.age;
  height = other.height;
  weight = other.weight;
  nationality = other.nationality;
  birthDate = other.birthDate;
  deathDate = other.deathDate;
}

Human &Human::operator=(const Human &other)
{
  if(this != &other)
    {
      (*this) = Human(other);
    }
  return *this;
}

std::string const & Human::getName() const
{
  return name;
}

std::string const & Human::getGender() const
{
  return gender;
}

int Human::getAge() const
{
  return age;
}

int Human::getHeight() const
{
  return height;
}

int Human::getWeight() const
{
  return weight;
}

std::string const & Human::getNationality() const
{
  return nationality;
}

std::string const & Human::getBirthDate() const
{
  return birthDate;
}

std::string const & Human::getDeathDate() const
{
  return deathDate;
}

void Human::setName(std::string const & newName)
{
  name = newName;
}

void Human::setGender(std::string const & newGender)
{
  gender = newGender;
}

void Human::setAge(const int &newAge)
{
  age = newAge;
}

void Human::setHeight(const int &newHeight)
{
  height = newHeight;
}

void Human::setWeight(const int &newWeight)
{
  weight = newWeight;
}

void Human::setNationality(const std::string &newNationality)
{
  nationality = newNationality;
}

void Human::setBirthDate(const std::string &newBirthDate)
{
  birthDate = newBirthDate;
}

void Human::setDeathDate(const std::string &newDeathDate)
{
  deathDate = newDeathDate;
}
