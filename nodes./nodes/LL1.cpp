#include <string>
#include <iostream>

struct Box
{
  std::string name;
  int number;
  Box *link;
};

int main()
{
  typedef Box *BoxP;
  BoxP head;
  head = new Box;
  head->name = "Hyewon";
  head->number = 1;
  // Two different ways to write:
  // std::cout << (*head).name << std::endl;
  // std::cout << (*head).number << std::endl;
  std::cout << head->name << std::endl;
  std::cout << head->number << std::endl;

  typedef Box *BoxP;
  BoxP body1 = head->link;
  body1 = new Box;
  body1->name = "Yuri";
  body1->number = 2;
  std::cout << body1->name << std::endl;
  std::cout << body1->number << std::endl;

  BoxP body2;
  body2 = new Box;
  body2->name = "Eun-bi";
  body2->number = 3;
  std::cout << body2->name << std::endl;
  std::cout << body2->number << std::endl;

  BoxP body3;
  body3 = new Box;
  body3->name = "Chaewon";
  body3->number = 4;
  std::cout << body3->name << std::endl;
  std::cout << body3->number << std::endl;

  BoxP body4;
  body4 = new Box;
  body4->name = "Minju";
  body4->number = 5;
  std::cout << body4->name << std::endl;
  std::cout << body4->number << std::endl;

  BoxP body5;
  body5 = new Box;
  body5->name = "Won-Young";
  body5->number = 6;
  std::cout << body5->name << std::endl;
  std::cout << body5->number << std::endl;
}
