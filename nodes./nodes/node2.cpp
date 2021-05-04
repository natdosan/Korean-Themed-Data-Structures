/**
 * creating a Single Linked List
 * 
 * 
 * copyright (c) 2021, sjkuksee
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct Node
{
  std::string name;
  int rank;   // could be any data type (char, float, etc)
  Node *next; // pointer to another node
};

int main()
{
  Node *tail;
  Node *head;
  Node *n1;
  n1 = new Node;
  // accessing rank and name of node "n1"
  n1->rank = 1;
  n1->name = "Hyewon";
  // make head and tail point to node n1
  tail = n1;
  head = n1;
  std::cout << n1->rank << ": " << n1->name << std::endl;

  n1 = new Node;
  n1->rank = 2;
  n1->name = "Yuri";
  tail->next = n1;   // make tail point to the next node
  tail = tail->next; // "moves" tail to point to the same node as n1
  std::cout << n1->rank << ": " << n1->name << std::endl;

  n1 = new Node;
  n1->rank = 3;
  n1->name = "Eun-bi";
  tail->next = n1;
  tail = tail->next;
  std::cout << n1->rank << ": " << n1->name << std::endl;

  n1 = new Node;
  n1->rank = 4;
  n1->name = "Chaewon";
  tail->next = n1;
  tail = tail->next;
  std::cout << n1->rank << ": " << n1->name << std::endl;

  n1 = new Node;
  n1->rank = 5;
  n1->name = "Minju";
  tail->next = n1;
  tail = tail->next;
  std::cout << n1->rank << ": " << n1->name << std::endl;

  n1 = new Node;
  n1->rank = 6;
  n1->name = "Won-young";
  tail->next = n1;
  n1->next = NULL;
  std::cout << n1->rank << ": " << n1->name << std::endl;

  return 0;
}