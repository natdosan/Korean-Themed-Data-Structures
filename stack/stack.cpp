#include <iostream>
#include <string>

class Stack
{
private:
  int index;
  int arr[5];

public:
  // constructor
  Stack()
  {
    // index is a tracker that works like a pointer
    // it keeps track of how full the stack is
    // -1 by default means arr[0]
    index = -1;
    for (int i = 0; i < 5; i++)
    {
      arr[i] = 0;
    }
  }

  // if index is not at default, then the stack contains atleast one value
  bool isEmpty()
  {
    if (index == -1)
      return true;
    else
      return false;
  }

  bool isFull()
  {
    if (index == 4)
      return true;
    else
      return false;
  }

  // adding value to stack
  void push(int val)
  {
    // must check if full first
    if (isFull())
    {
      std::cout << "Stack overflow" << std::endl;
    }
    else
    {
      // adjust the index, then append val to the new index in arr[]
      index++;
      arr[index] = val;
    }
  }

  int pop()
  {
    // must check if empty first
    if (isEmpty())
    {
      std::cout << "Stack underflow" << std::endl;
      return 0;
    }
    else
    {
      // take value on top of stack, store in a temp variable
      int tempPop = arr[index];
      // get rid of the value, then adjust the index
      arr[index] = 0;
      index--;
      return tempPop;
    }
  }

  // see the current size of stack
  int count()
  {
    return index + 1;
  }

  // see the value at a particular index
  int peek(int position)
  {
    if (isEmpty())
    {
      std::cout << "Stack underflow" << std::endl;
      return 0;
    }
    else
    {
      return arr[position];
    }
  }

  // change a value in the stack
  void change(int v, int pos)
  {
    v = arr[pos];
    std::cout << "Value changed to: " << v << " at arr[" << pos << "]" << std::endl;
  }

  void dump()
  {
    std::cout << "All values in the stack are " << std::endl;
    // in this case, we have predefined the size to 5 elements, so i = 4
    // incrimenting down since stacks are LIFO
    for (int i = 4; i >= 0; i--)
    {
      std::cout << "| " << arr[i] << " |" << std::endl;
    }
  }
};

int main()
{
  Stack s1;
  int option, position, value;
  // menu driven output
  do
  {
    std::cout << "1: Push() " << std::endl;
    std::cout << "2. Pop() " << std::endl;
    std::cout << "3. isEmpty()" << std::endl;
    std::cout << "4. isFull() " << std::endl;
    std::cout << "5. count() " << std::endl;
    std::cout << "6. peek() " << std::endl;
    std::cout << "7. change()" << std::endl;
    std::cout << "8. dump() " << std::endl;
    std::cout << "9. Clear screen " << std::endl;

    std::cin >> option;
    switch (option)
    {
    case 1:
      std::cout << "Enter a value to push into the stack " << std::endl;
      std::cin >> value;
      s1.push(value);
      break;
    case 2:
      std::cout << "Pop function called - Popped value: " << s1.pop() << std::endl;
      break;
    case 3:
      if (s1.isEmpty())
        std::cout << "Stack is Empty" << std::endl;
      else
        std::cout << "Stack is not Empty" << std::endl;
      break;
    case 4:
      if (s1.isFull())
      {
        std::cout << "Stack is Full" << std::endl;
      }
      else
        std::cout << "Stack is not Full" << std::endl;
      break;
    case 5:
      s1.count();
      break;
    case 6:
      std::cout << "Enter a position inside the array range" << std::endl;
      std::cin >> position;
      s1.peek(position);
      break;
    case 7:
      std::cout << "Enter a new value" << std::endl;
      std::cin >> value;
      std::cout << "Enter a position inside the array range" << std::endl;
      std::cin >> position;
      s1.change(value, position);
      break;
    case 8:
      s1.dump();
      break;
    case 9:
      system("cls");
      break;
    default:
      std::cout << "Enter a valid option number" << std::endl;
      break;
    }
  } while (option != 0);
}