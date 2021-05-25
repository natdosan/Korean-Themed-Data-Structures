/**
 * Check out sets.
 *
 * Copyright (c) 2021, sjkuksee.
*/

#include <set>
#include <iostream>

// count() gives number of instances of given value in set
#define IN(s, x) (s.count(x) > 0 ? "Yes" : "No")

// Don't forget return by reference
std::ostream &operator<<(std::ostream &os, const std::set<std::string> Bias)
{
  os << '{';
  int i = 0;
  for (std::string x : Bias)
  {
    if (i++ > 0)
    {
      os << ", ";
    }
    os << x;
  }
  os << '}';
  return os;
}

int main()
{
  std::set<std::string> Bias = {"Sana (Ult)", "Joy", "Nayeon (Bunny)", "Dahyun (wrecker)", "Tzuyu (wrecker)", "Soojin", "Monday (wrecker)", "Saerom", "Nagyung (wrecker)", "Hyewon", "Eunbi (wrecker)", "Yuri (wrecker)", "Isa"};
  std::cout << Bias << std::endl;

  // std::cout << "s1 contains 10: " << IN(s1, 10) << std::endl;
  // std::cout << "s1 contains 100: " << IN(s1, 100) << std::endl;

  Bias.insert("Jeongyeon");
  std::cout << Bias << std::endl;

  Bias.insert("Yeji");
  std::cout << Bias << std::endl;

  Bias.erase("Jeongyeon");
  std::cout << Bias << std::endl;

  Bias.clear();
  Bias.insert("Cleared biases");
  std::cout << Bias << std::endl; // {}
}