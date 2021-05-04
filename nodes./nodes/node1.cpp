/**
 * Creating the Node of A Single Linked List
 * 
 * 
 * copyright (c) 2021, sjkuksee
 */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;          // could be any data type (char, float, etc)
  struct node *next; // pointer to another node
};

int main()
{
  struct Node *head = NULL;
  // head = (struct Node *)malloc(sizeof(struct Node));

  head->data = 45;
  head->next = NULL;

  printf("%d", head->data);
  return 0;
}