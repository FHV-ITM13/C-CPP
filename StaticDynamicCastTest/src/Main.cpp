//============================================================================
// Name        : StaticDynamicCastTest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "A.h"
#include "B.h"
#include "Base.h"
using namespace std;

int main() {
	Base *base = new Base();
	A *a = new A();

	A *ap = static_cast<A*>(base);
	if(ap != NULL) {
		//geht nicht
		//cout << ap->getName() << endl;
		cout << ap->getAge() << endl;
	} else {
		cout << "AP ist null" << endl;
	}

	A* ap2 = dynamic_cast<A*>(base);
	if(ap2 != NULL) {
		cout << ap2->getName() << endl;
		cout << ap2->getAge() << endl;
	} else {
		cout << "AP 2 ist null" << endl;
	}

	A* ap3 = (A*)base;
	if(ap3 != NULL) {
		//geht nicht
		//cout << ap3->getName() << endl;
		cout << ap3->getAge() << endl;
	} else {
		cout << "AP 3 ist null" << endl;
	}

	cout << endl << endl;

	Base *basep = static_cast<Base*>(a);
	if(basep != NULL) {
		cout << basep->getAge() << endl;
	} else {
		cout << "basep ist null" << endl;
	}

	Base* basep1 = dynamic_cast<Base*>(a);
	if(ap2 != NULL) {
		cout << basep1->getAge() << endl;
	} else {
		cout << "basep 1 ist null" << endl;
	}

	Base* basep2 = (Base*)a;
	if(basep2 != NULL) {
		cout << basep2->getAge() << endl;
	} else {
		cout << "basep 2 ist null" << endl;
	}

	A *ap4 = static_cast<A*>(basep);
	if(ap4 != NULL) {
		cout << ap4->getName() << endl;
		cout << ap4->getAge() << endl;
	} else {
		cout << "AP ist null" << endl;
	}

	A* ap5 = dynamic_cast<A*>(basep);
	if(ap5 != NULL) {
		cout << ap5->getName() << endl;
		cout << ap5->getAge() << endl;
	} else {
		cout << "AP 2 ist null" << endl;
	}

	A* ap6 = (A*)basep;
	if(ap6 != NULL) {
		cout << ap6->getName() << endl;
		cout << ap6->getAge() << endl;
	} else {
		cout << "AP 3 ist null" << endl;
	}
	return 0;
}
