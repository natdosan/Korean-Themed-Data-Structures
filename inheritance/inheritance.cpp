/**
 * Inheritance.
 *
 * Copyright (c) 2021, sjkuksee.
*/

#include <iostream>
#include <string>

// Unnamed namespace to protect global variables
namespace
{
  int gid = 1000;
}

class Gen1
{
private:
  // Not visible to any other class, including derived ones
  int _id = ++gid;

protected:
  // Visible to this and all derived classes, but not outside these
  std::string _bias;

public:
  // Visible to all
  Gen1()
  {
  }
  explicit Gen1(std::string bias) : _bias(bias)
  {
  }
  std::string wrecker()
  {
    return "Sana";
  }
  std::string bias()
  {
    return _bias;
  }
  int id()
  {
    return _id;
  }
};

class Gen2 : public Gen1
{
public:
  explicit Gen2(std::string bias) : Gen1(bias)
  {
  }
  // Redefinition of bias
  std::string bias()
  {
    return "Nayeon";
  }
};

class Gen3 : public Gen2
{
public:
  explicit Gen3(std::string bias) : Gen2(bias)
  {
  }
  // Redefinition
  std::string bias()
  {
    return "Dahyun";
  }
};

class Gen4 : public Gen3
{
public:
  // Can directly assign to _weight because it is visible
  explicit Gen4(std::string bias) : Gen3(bias)
  {
    _bias = bias;
  }
  // Redefinition
  std::string bias()
  {
    return "Touching grass";
  }
};

int main()
{
  std::cout << "Enter your ultimate bias: ";
  std::string yourBias;
  std::cin >> yourBias;
  // std::cout << "Bias: " << yourBias;
  Gen3 h1(yourBias);
  std::cout << "Bias: " << h1.bias() << ", Wrecker: " << h1.wrecker() << " <3" << std::endl;
  // Access base class Gen2's version
  std::cout << "2nd Bias: " << h1.Gen2::bias() << ", Wrecker: " << h1.wrecker() << " <3" << std::endl;
  // And base class Gen1's version of diet()
  std::cout << "3rd Bias: " << h1.Gen1::bias() << ", Wrecker: " << h1.wrecker() << " <3" << std::endl;

  // bias is set by Gen4's constructor
  Gen4 h2(yourBias);
  std::cout << "Bias: " << h2.bias() << ", Wrecker: " << h2.wrecker() << " <3" << std::endl;

  // Can't access private or protected members here
  // std::cout << c1._id << std::endl;
  // std::cout << c1._bias << std::endl;
}