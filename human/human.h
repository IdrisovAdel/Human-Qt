#ifndef HUMAN_H
#define HUMAN_H

//#include <QObject>
#include <string>

class Human //: public QObject
{
  //Q_OBJECT
public:
  explicit Human(/*QObject *parent = nullptr,*/ const std::string newName = "", const std::string newGender = "", int const & newAge = 0,
                      int const & newHeight = 0, int const & newWeight = 0, const std::string newNationality = "",
                      const std::string newBirthDate = "", const std::string newDeathDate = "");
  Human(const Human &other);
  Human & operator=(Human const & other);

  std::string const & getName() const;
  std::string const & getGender() const;
  int getAge() const;
  int getHeight() const;
  int getWeight() const;
  std::string const & getNationality() const;
  std::string const & getBirthDate() const;
  std::string const & getDeathDate() const;

  void setName(std::string const & newName);
  void setGender(std::string const & newGender);
  void setAge(int const & newAge);
  void setHeight(int const & newHeight);
  void setWeight(int const & newWeight);
  void setNationality(std::string const & newNationality);
  void setBirthDate(std::string const & newBirthDate);
  void setDeathDate(std::string const & newDeathDate);

private:
  std::string name;
  std::string gender;
  int age;
  int height;
  int weight;
  std::string nationality;
  std::string birthDate;
  std::string deathDate;
//signals:

//public slots:
};

#endif // HUMAN_H
