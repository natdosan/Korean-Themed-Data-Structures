/**
 * Inserting a node at nth position
 * 
 * copyright (c) 2021, sjkuksee
 */

struct Node
{
  int rank;          // data 1
  std::string name;  // data 2
  struct Node *next; // link pointer
};

void print();
void insert(int rank, std::string name, int n);
