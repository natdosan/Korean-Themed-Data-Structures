/**
 * Check out Maps.
 * 
 * copyright (c) 2021, sjkuksee.
 */

#include <map>
#include <iostream>
#include <string>
#include <cstdio>

std::string pick(std::string &, std::string &, std::string &);
std::map<std::string, std::string> add(std::map<std::string, std::string> &, std::string &, std::string &, std::string &);
void dump(std::map<std::string, std::string> &);
void again();

std::string pick(std::string &group, std::string &bias, std::string &wrecker)
{
  std::string answer;

  while (std::cin)
  {
    std::cout << "What group would you like to add to the biases?" << std::endl;
    std::getline(std::cin, group);
    std::cout << "Enter your " << group << " bias: " << std::endl;
    std::getline(std::cin, bias);
    std::cout << "Enter your " << group << " wrecker: " << std::endl;
    std::getline(std::cin, wrecker);
    std::cout << "Adding " << group << " to the list\n";
  }

  return group, bias, wrecker;
}

std::map<std::string, std::string> add(std::map<std::string, std::string> &yourBias, std::string &group, std::string &bias, std::string &wrecker)
{
  std::cout << "What group would you like to add to the biases?" << std::endl;
  std::getline(std::cin, group);
  std::cout << "Enter your " << group << " bias: " << std::endl;
  std::getline(std::cin, bias);
  std::cout << "Enter your " << group << " wrecker: " << std::endl;
  std::getline(std::cin, wrecker);
  std::cout << "Adding " << group << " to the list" << std::endl;

  yourBias["Your bias: "] = bias;
  yourBias["Your wrecker: "] = wrecker;
  return yourBias;
}

void dump(std::map<std::string, std::string> &yourBias)
{
  for (auto const &bias : yourBias)
  {
    std::cout << bias.first << bias.second << std::endl;
  }
}

int main()
{
  std::string group, bias, wrecker;
  std::map<std::string, std::string> yourBias;

  pick(group, bias, wrecker);
  add(yourBias, group, bias, wrecker);
  dump(yourBias);
}
