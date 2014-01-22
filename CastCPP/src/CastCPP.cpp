//============================================================================
// Name        : CastCPP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Base.h"
#include "B.h"
#include "A.h"

using namespace std;

int main() {
	Base *base = new Base();

	// Compile ERROR
	//A *a = static_cast<A*>(base);

	B *b1 = static_cast<B*>(base);

	if (b1 != NULL) {
		cout << b1->print() << endl;
		// if getName is virtual => Error => Vritual Method Table
		cout << b1->getName() << endl;
		cout << b1->getAge() << endl;
	} else {
		cout << "B1 NULL" << endl;
	}

	B *b2 = dynamic_cast<B*>(base);

	if (b2 != NULL) {
		cout << b2->print() << endl;
		cout << b2->getName() << endl;
		cout << b2->getAge() << endl;
	} else {
		cout << "B2 NULL" << endl;
	}

	B *b3 = (B*) base;

	if (b2 != NULL) {
		cout << b3->print() << endl;
		cout << b3->getName() << endl;
		cout << b3->getAge() << endl;
	} else {
		cout << "B3 NULL" << endl;
	}

	return 0;
}
