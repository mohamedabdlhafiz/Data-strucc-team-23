//	This is an updated version of code originally
//  created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** ADT stack: Array-based implementation.
@file ArrayStack.h */

#ifndef ARRAY_STACK_
#define ARRAY_STACK_

#include "StackADT.h"

//#define STACK_SIZE 50
//Unless spesificed by the stack user, the default size is 100
template<typename T>
class ArrayStack : public StackADT<T>
{
	enum { STACK_SIZE = 50};
private:
	T items[STACK_SIZE];		// Array of stack items (you can also make it a pointer and allocate it dynamically)
	int      top;                   // Index to top of stack
	

public:

	ArrayStack() 
	{		
		top = -1;
	}  // end default constructor

	bool isEmpty() const
	{
		return top == -1;
	}  // end isEmpty

	bool push(const T& newEntry)
	{
		if (top == STACK_SIZE - 1) return false;	//Stack is FULL

		top++;
		items[top] = newEntry;
		return true;
	}  // end push

	bool pop(T& TopEntry)
	{
		if (isEmpty()) return false;

		TopEntry = items[top];
		top--;
		return true;
	}  // end pop

	bool peek(T& TopEntry) const
	{
		if (isEmpty()) return false;

		TopEntry = items[top];
		return true;
	}  // end peek


}; // end ArrayStack

#endif
