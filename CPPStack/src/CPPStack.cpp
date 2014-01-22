//============================================================================
// Name        : CPPStack.cpp
// Author      : Thomas Gaida
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
	cout << "What the sh" << endl; // prints What the sh

	Stack<int,5> *stack=new Stack<int,5>();

	stack->push(5);
	stack->push(4);
	stack->push(3);
	stack->push(2);

	cout<<stack->pop()<<endl;
	cout<<stack->pop()<<endl;
	cout<<stack->pop()<<endl;
	cout<<stack->pop()<<endl;

	delete stack;

	return 0;
}
