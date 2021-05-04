/**
 * Add a node at the Head of a Linked List
 * 
 * copyright (c) 2021, sjkuksee
 */

#include <string>
#include <iostream>

struct Node
{
  std::string name;
  Node *link;
};

typedef Node *NodeP;

void Insert(NodeP &head, std::string newName);
// Precondition: The pointer variable head points to the head of LL
// Postcondition: A new node containing newName has been added at the head of the LL

void Insert(NodeP &head, std::string newName)
{
  NodeP tempP;
  tempP = new Node;
  tempP->name = newName;

  tempP->link = head;
  head = tempP;
  std::cout << tempP->name << std::endl;
}