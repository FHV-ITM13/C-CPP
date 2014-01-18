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
#include "Base.h"
using namespace std;

int main() {
	Base *base = new Base();
	A *a = new A();
	B *b = new B();
	C *c = new C();

	cout << endl << "Base object" << endl;
	cout << base->getAge() << endl;

	cout << endl << "A object" << endl;
	cout << a->getName() << endl;
	cout << a->getAge() << endl;

	cout << endl << "B object" << endl;
	cout << b->getName() << endl;
	cout << b->getAge() << endl;

	cout << endl << "C object" << endl;
	cout << c->getName() << endl;
	cout << c->getAge() << endl;
	cout << c->A::getName() << endl; //to specify which method to call
	cout << c->B::getName() << endl; //to specify which method to call
	cout << c->Base::getAge() << endl;

	cout << "Delete A" << endl;
	delete a;

	cout << endl << "Delete B" << endl;
	delete b;

	cout << endl << "Delete C" << endl;
	//delete c; //lets application crash - why??

	cout << endl << "assign derived type to general type (slicing)" << endl;

	/*
	 * Base don’t know anything about the derived class A.
	 * Only the attributes known to the base class are copied.
	 * The attributes of the A class will not be copied
	 * -> the derived class has been sliced.
	 */
	A aa;
	Base bbase = aa;
	Base *pBbase = &bbase;
	A *aaa = dynamic_cast<A*>(pBbase);

	cout << bbase.getAge() << endl;

	cout << "bbase: " << pBbase << endl;
	cout << "aaa: " << aaa << endl;

	cout << endl << endl;

	return 0;
}
