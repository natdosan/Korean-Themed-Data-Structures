/**
 * Bias Guesser using Exception Handling
 * 
 * Copyright (c) 2021, sjkuksee
 */

#include <iostream>
#include <string>
#include <vector>

class Bias
{
public:
  virtual std::string what()
  {
    return "Bias.what()";
  }
};

class Ult : public Bias
{
private:
  std::string _e;

public:
  explicit Ult(std::string e) : _e(e)
  {
  }
  std::string what()
  {
    return _e;
  }
};

void a(std::string *xp)
{
  if (xp == nullptr)
  {
    throw Bias();
  }
  if (*xp == "Sana")
  {
    throw Ult("Ult!");
  }
  if (*xp == "Joy")
  {
    throw Ult("Ult Wrecker");
  }
  std::cout << "Guess: " << *xp << " is incorrect!" << std::endl;
  std::cout << "Enter 1 to exit or Try again " << std::endl;
}

int main()
{
  std::string x = "Mommy";
  std::vector<std::string *> ipv = {nullptr, &x};

  // Catch base and derived class errors separately
  // You must have Ult first!
  for (std::string *xp : ipv)
  {
    try
    {
      a(xp);
    }
    catch (Ult e)
    {
      std::cout << "Outcome: " << e.what() << std::endl;
    }
    catch (Bias e)
    {
      std::cout << "Outcome: " << e.what() << std::endl;
    }
  }

  // Using polymorphism to invoke the right what()
  while (std::cin >> x)
  {
    if (x == "1")
      exit(101);
    else
    {
      try
      {
        a(&x);
      }
      catch (Bias &e)
      {
        std::cout << "Error: " << e.what() << std::endl;
      }
    }
  }
}