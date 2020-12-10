#include "singletonhuman.h"
SingletonHuman &SingletonHuman::instance()
{
  static SingletonHuman interface;
  return interface;
}

void SingletonHuman::toHumanVectorAdd(const Human &instance)
{
  fillFile(instance);
  human.push_back(instance);
}



size_t SingletonHuman::humanVectorSize()
{
  return human.size();
}

void SingletonHuman::fillFile(const Human &tempHuman)
{
  file->inFileWrite(toString(tempHuman));
}


const Human &SingletonHuman::getHuman(unsigned inVectorNumber) const
{
  return human[inVectorNumber];
}

const Human SingletonHuman::fromString(const std::string &line) const
{
  Human temp;
  size_t position = 0;
  temp.setName(line.substr(position, line.find(' ', position)));
  position = line.find(' ', position) + 1;
  temp.setGender(line.substr(position, line.find(' ', position) - position));
  position = line.find(' ', position) + 1;
  temp.setAge(std::stoi(line.substr(position, line.find(' ', position) - position)));
  position = line.find(' ', position) + 1;
  temp.setHeight(std::stoi(line.substr(position, line.find(' ', position) - position)));
  position = line.find(' ', position) + 1;
  temp.setWeight(std::stoi(line.substr(position, line.find(' ', position) - position)));
  position = line.find(' ', position) + 1;
  temp.setNationality(line.substr(position, line.find(' ', position) - position));
  position = line.find(' ', position) + 1;
  temp.setBirthDate(line.substr(position, line.find(' ', position) - position));
  position = line.find(' ', position) + 1;
  temp.setDeathDate(line.substr(position, line.size() - position));
  return temp;
}

const std::string SingletonHuman::toString(const Human &tempHuman) const
{
  std::string line = tempHuman.getName() + " " + tempHuman.getGender() + " " + std::to_string(tempHuman.getAge()) + " "
      + std::to_string(tempHuman.getHeight()) + " " + std::to_string(tempHuman.getWeight()) + " " + tempHuman.getNationality() + " "
      + tempHuman.getBirthDate() + " " + tempHuman.getDeathDate();
  return line;
}

void SingletonHuman::fillVectorFromFile()
{
  std::string text = file->fromFileRead();
  for(size_t position = 0; position < text.size(); ++position)
    {
      std::string temp = text.substr(position, text.find('\n', position) - position);
      position = text.find('\n', position);
      human.push_back(fromString(temp));
    }
}


SingletonHuman::SingletonHuman(QObject *parent) : QObject(parent)
{
  file = new humanFile();
  fillVectorFromFile();
}
