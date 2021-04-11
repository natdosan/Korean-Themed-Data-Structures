/**
 * Inserting a node at nth position
 * 
 * copyright (c) 2021, sjkuksee
 */

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "node4.h"

struct Node *head; // creating head pointer
void print()
{
  Node *temp = head;
  while (temp != NULL)
  {
    std::cout << temp->rank << ": " << temp->name << std::endl;
    temp = temp->next;
  }
}

void insert(int rank, std::string name, int n)
{
  Node *temp1 = new Node();
  temp1->rank = rank;
  temp1->name = name;
  temp1->next = NULL;
  if (n == 1)
  {                     // insert at the head or first position
    temp1->next = head; // set the head of the new node to whatever the existing head is
    head = temp1;
    return;
  }
  Node *temp2 = head;             // create another pointer, start at the head
  for (int i = 0; i < n - 2; i++) // point temp2 to n-1th node
  {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next; // set the next field of newly created node as the next field of the n-1th node
  temp2->next = temp1;       // adjust next of n-1th node to point to the newly created node
}

int main()
{
  head = NULL; // initialize head as null (empty list)
  insert(1, "Hyewon", 1);
  insert(2, "Yuri", 2);
  insert(3, "Eun-bi", 3);
  insert(4, "Chaewon", 4);
  insert(5, "Won-Young", 5);
  print();
}
