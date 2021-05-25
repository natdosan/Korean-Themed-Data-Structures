/**
 * Class inheritance, copy constructor, and destructors.
 *
 * Copyright (c) 2021, sjkuksee.
*/

#include <iostream>
#include <string>
class Bias
{
private:
  std::string *_names;

protected:
  std::string _id;

public:
  // "Copy constructor" - note the const and the &
  Bias(const Bias &p)
  {
    std::cout << "Bias copy constructor" << std::endl;
    _names = nullptr;
    _id = p._id + " copy";
  }
  Bias(std::string id, int aliases)
  {
    _id = id;
    _names = new std::string[aliases];
  }
  ~Bias()
  {
    std::cout << "~Bias: " << _id << std::endl;
    if (_names != nullptr)
    {
      delete[] _names;
    }
    _names = nullptr;
  }
  virtual std::string who()
  {
    return "Bias";
  }
};

class Wrecker : public Bias
{
private:
  std::string *_courses;

public:
  Wrecker(std::string id, int aliases, int load) : Bias(id, aliases)
  {
    _courses = new std::string[load];
  }
  ~Wrecker()
  {
    std::cout << "~Wrecker: " << _id << std::endl;
    if (_courses != nullptr)
    {
      delete[] _courses;
    }
    _courses = nullptr;
  }
  // This "overrides" Person::who()
  std::string who()
  {
    return "Wrecker";
  }
};

int main()
{
  // Automatically calls ~Person
  // Demonstrates "redifinition"
  Bias p1("p1", 3);
  Wrecker s1("s1", 2, 6);
  std::cout << "p1.who() = " << p1.who() << std::endl;
  std::cout << "s1.who() = " << s1.who() << std::endl;

  // Makes a copy to Person
  // Person (no polymorphism)
  // Copy constructor invoked
  Bias p2 = s1;
  std::cout << "p2.who() = " << p2.who() << std::endl;

  // Assign address to Person pointer (does NOT copy the full object)
  // Student (polymorphism)
  // Copy constructor NOT invoked here
  Bias *p3p = &s1;
  std::cout << "p3p->who() = " << p3p->who() << std::endl;

  // Create by reference
  // Student (polymorphism)
  // Copy constructor NOT invoked here as well
  Bias &p4 = s1;
  std::cout << "p4.who() = " << p4.who() << std::endl;
}