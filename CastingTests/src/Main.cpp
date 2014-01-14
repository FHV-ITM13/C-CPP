/*
 * Main.cpp
 *
 *  Created on: 14.01.2014
 *      Author: Stefan
 */

#include <iostream>
#include <exception>
using namespace std;

class Base {
public:
	Base() {
	}
	~Base() {
	}
	virtual void dummy() {
	}
};
class Derived: public Base {
public:
	Derived() {
		a = 5;
	}
	~Derived() {
	}

private:
	int a;
};

class Standalone {
};

int main() {
	/*
	 * Gute Erklaerungen zu static/dynamic cast
	 * http://www.cplusplus.com/doc/tutorial/typecasting/
	 * http://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Statements/Variables/Type_Casting
	 */
	Base b;
	Derived d;
	Base *pb = &d;
	Base *pba = new Derived;
	Base *pbb = new Base;
	Derived * pd;

	/*
	 * dynamic casts
	 */
	cout<< "Dynamic casts" << endl;
	Derived* b1 = dynamic_cast<Derived*>(&b);  // NULL, because 'a' is not a 'B'
	b1 != 0 ? cout << "b1 valid cast" << endl : cout << "b1 Null pointer" << endl;

	Derived* b2 = dynamic_cast<Derived*>(pb);  // 'b'
	b2 != 0 ? cout << "b2 valid cast" << endl : cout << "b2 Null pointer" << endl;

	Standalone* c = dynamic_cast<Standalone*>(pb);   // NULL.
	c != 0 ? cout << "c valid cast" << endl : cout << "c Null pointer" << endl;

	Base& ar = dynamic_cast<Base&>(*pb); // Ok.
	cout << "ar: " << &ar << endl;

	Derived& br = dynamic_cast<Derived&>(*pb); // Ok.
	cout << "br: " << &br << endl;

	try {
		Standalone& cr = dynamic_cast<Standalone&>(*pb); // std::bad_cast
		cout << "cr: " << &cr << endl;
	} catch (exception& e) {
		cout << "Standalone exception: " << e.what() << endl;
	}

	pd = dynamic_cast<Derived*>(pba); //ok
	pd != 0 ? cout << "pd valid cast 1" << endl : cout << "pd Null pointer 1" << endl;

	pd = dynamic_cast<Derived*>(pbb); //null
	pd != 0 ? cout << "pd valid cast 2" << endl : cout << "pd Null pointer 2" << endl;

	/*
	 * static casts
	 */
	cout << endl << endl << "Static casts" << endl;
	Derived* b3 = static_cast<Derived*>(&b); //VALID!! Points to incomplete object..
	b3 != 0 ? cout << "b3 valid cast" << endl : cout << "b3 Null pointer" << endl;

	Derived* b4 = static_cast<Derived*>(&d); //VALID!!
	b4 != 0 ? cout << "b4 valid cast" << endl : cout << "b4 Null pointer" << endl;

	Standalone* c1 = dynamic_cast<Standalone*>(pb);   // NULL.
	c1 != 0 ? cout << "c1 valid cast" << endl : cout << "c1 Null pointer" << endl;

	Standalone* c2 = dynamic_cast<Standalone*>(&b);   // NULL.
	c2 != 0 ? cout << "c2 valid cast" << endl : cout << "c2 Null pointer" << endl;

	return 0;
}
