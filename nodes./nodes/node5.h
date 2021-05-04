/**
 * Adding a Node at the top of a linked list. 
 * 
 * copyright (c) 2021, sjkuksee
 */

#include <iostream>
#include <string>

struct Node
{
  int height;
  std::string name;
  Node *link;
};

typedef Node *NodeP;

void headInsert(NodeP &head, int New);