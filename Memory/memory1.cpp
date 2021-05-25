/**
 * Memory Allocation/deallocation
 * 
 * copyright (c) 2021, sjkuksee.
 */

#include <cstdio>
#include <cstdlib>

int main()
{
  // Very convenient to allocate
  int *i1p = new int[0x100];
  int *i2p = new int;

  // () initializes to 0
  // make sure to terminate with nul character if not initialized
  char *flover1 = new char[0x10]();
  printf("flover1 = '%s'\n", flover1); // guaranteed to be empty
  flover1[0] = 'L';
  flover1[1] = 'e';
  flover1[2] = 'e';
  flover1[3] = ' ';
  flover1[4] = 'S';
  flover1[5] = 'a';
  flover1[6] = 'e';
  flover1[7] = 'r';
  flover1[8] = 'o';
  flover1[9] = 'm';
  flover1[10] = '!'; // no need to add a nul terminator
  printf("flover1 = '%s'\n", flover1);

  // Lower level allocation
  char *flover2 = static_cast<char *>(malloc(0x10));
  printf("flover2 = '%s'\n", flover2); // not guaranteed to be empty
  flover2[0] = 'L';
  flover2[1] = 'e';
  flover2[2] = 'e';
  flover2[3] = ' ';
  flover2[4] = 'N';
  flover2[5] = 'a';
  flover2[6] = 'g';
  flover2[7] = 'y';
  flover2[8] = 'u';
  flover2[9] = 'n';
  flover2[10] = 'g';
  flover2[11] = '!';
  flover2[12] = '\0'; // Need to add a nul terminator
  printf("flover2 = '%s'\n", flover2);

  // deallocate new with delete
  delete[] i1p; // note the [] for array
  delete i2p;
  delete[] flover1;

  // deallocate mallic with free()
  free(flover2);
}