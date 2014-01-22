//============================================================================
// Name        : CPPStaticCast.cpp
// Author      : Thomas Gaida
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;

class Base {

public:
	virtual void print(){
		cout << "Print 1 Base" << std::endl; // prints What the sh
	}

};
class Derived: public Base {

public:
	void print(){
		cout << "Print 2 Base" << std::endl; // prints What the sh
	}
};


int main() {
	cout << "What the sh" << std::endl; // prints What the sh

	Base * a = new Base;
	Derived * b = static_cast<Derived*>(a);

	b->print();

	return 0;
}
