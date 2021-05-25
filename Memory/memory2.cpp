/**
 * Virtual destructors.
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
  Bias(std::string id, int aliases)
  {
    _id = id;
    _names = new std::string[aliases];
  }
  ~Bias()
  {
    std::cout << "~Bias: " << _id << std::endl;
    delete[] _names;
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
    delete[] _courses;
  }
};

int main()
{
  // Automatically calls ~Person
  Bias b1("Joy", 3);
  Wrecker w1("Irene", 2, 6);
}