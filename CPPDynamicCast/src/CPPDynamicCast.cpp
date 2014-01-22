//============================================================================
// Name        : CPPDynamicCast.cpp
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
		cout << "Print 1 Base" << std::endl; // prints What the sh
	}
};


int main() {
	cout << "What the sh" << endl; // prints What the sh

	try {
	    Base * pba = new Derived;
	    Base * pbb = new Base;
	    Derived * pd;

	    pd = dynamic_cast<Derived*>(pba);
	    if (pd==0) cout << "Null pointer on first type-cast.\n";

	    pd = dynamic_cast<Derived*>(pbb);
	    if (pd==0) cout << "Null pointer on second type-cast.\n";

	  } catch (exception& e) {cout << "Exception: " << e.what();}

	return 0;
}
