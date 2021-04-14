/**
 * Implimentation of a Node at the top of a linked list. 
 * 
 * copyright (c) 2021, sjkuksee
 */

#include "node5.h"

void headInsert(NodeP &head, int New, std::string Name)
{
  // 1. Create new node that we want to insert
  NodeP tempP;
  tempP = new Node;

  // 2. Place data in the new node
  // make the link member of new node point to the head node of the original list
  tempP->link = head;
  tempP->height = New;
  tempP->name = Name;

  // 3. Make the pointer variable named "head" point to the new node
  // head* will now point to the same thing as tempP
  head = tempP;
}
