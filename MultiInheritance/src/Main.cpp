//============================================================================
// Name        : MultiInheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"
using namespace std;

int main() {
	A *a = new A();
	B *b = new B();
	C *c = new C();

	cout << a->getName() << endl;
	cout << b->getName() << endl;
	cout << c->getName() << endl;
	cout << c->A::getName() << endl; //to specify which method to call
	cout << c->B::getName() << endl; //to specify which method to call

	cout << "Delete A" << endl;
	delete a;

	cout << endl << "Delete B" << endl;
	delete b;

	cout << endl << "Delete C" << endl;
	delete c;

	return 0;
}
