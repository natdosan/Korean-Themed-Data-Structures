/**
 * Check out Maps.
 * 
 * copyright (c) 2021, sjkuksee.
 */

#include <map>
#include <iostream>
#include <string>

int main()
{
  std::string group, bias, wrecker;

  // Using strings as keys
  std::map<std::string, std::string> natesBias = {
      {"Ultimate Bias: ", "Sana"},
      {"Twice Bias: ", "Nayeon"},
      {"Twice Wrecker: ", "Dahyun/Tzuyu"},
      {"Red Velvet Bias: ", "Joy"},
      {"Red Velvet Wrecker: ", "Irene"},
      {"Fromis_9 Bias: ", "Saerom"},
      {"Fromis_9 Wrecker: ", "Nagyung"},
      {"Weeekly Bias: ", "Monday"},
      {"Weeekly Wrecker: ", "Soojin"}};

  std::cout << "Nate's Twice Bias: " << natesBias["Twice Bias: "] << std::endl;
  std::cout << " " << std::endl;

  // Setting value for a non-existing key adds the key with that value
  natesBias["Izone Bias: "] = "Hyewon";
  natesBias["Izone Wrecker: "] = "Eunbi";

  std::cout << "All biases, wreckers, and ultimate bias:" << std::endl;

  //https://www.techiedelight.com/print-keys-values-map-cpp/
  for (auto const &bias : natesBias)
  {
    std::cout << bias.first << bias.second << std::endl;
  }
}
