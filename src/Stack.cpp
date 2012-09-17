#include "Stack.h"
#include <iostream>
#include <assert.h>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
  capacity = initialSize;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
  // assert (top != capacity);

  //if theStack is full
  // create new stack twice as big
  // copy all elements to new stack
  // delete old stack
  // point old stack pointer to new stack

  if (top == capacity) {
    capacity = capacity * 2;
    int* newStack = new int[capacity];
    for (int i = 0; i < capacity; ++i)
      newStack[i] = theStack[i];
    delete[] theStack;
    theStack = newStack;
  }
    theStack[top] = value;
    top++;
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}
