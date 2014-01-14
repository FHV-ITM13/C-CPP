/*
 * Main.cpp
 *
 *  Created on: 14.01.2014
 *      Author: Stefan
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * Nette Erklaerung:
 * http://en.wikipedia.org/wiki/Curiously_Recurring_Template_Pattern
 * http://en.wikipedia.org/wiki/Template_metaprogramming#Static_polymorphism
 */

template<class Derived>
class Base {
public:
	static string StaticCanPerformAction() {
		return Derived::staticCanPerformActionImpl();
	}

	string CanPerformAction() {
		return static_cast<Derived *>(this)->canPerformActionImpl();
	}
};

class Derived1: public Base<Derived1> {
	friend class Base<Derived1> ; //needed for static binding
private:
	static string staticCanPerformActionImpl() {
		return "static Derived1";
	}

	string canPerformActionImpl() {
		return "instance Derived1";
	}
};

class Derived2: public Base<Derived2> {
	friend class Base<Derived2> ;  //needed for static binding
private:
	static string staticCanPerformActionImpl() {
		return "static Derived2";
	}

	string canPerformActionImpl() {
		return "instance Derived2";
	}
};

int main() {
    Base<Derived1> *pBase = new Derived1;
    cout << pBase->CanPerformAction() << endl;
    cout << pBase->StaticCanPerformAction() << endl;

    Base<Derived2> *pBase2 = new Derived2;
    cout << pBase2->CanPerformAction() << endl;
    cout << pBase2->StaticCanPerformAction() << endl;
	return 0;
}
