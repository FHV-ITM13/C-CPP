/*
 * B.h
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#ifndef B_H_
#define B_H_

#include <string>
#include <iostream>
#include "Base.h"
using namespace std;

class B : virtual public Base {

public:
	B()  {
		name = new string("B");
		age = new int(2);
	}
	virtual ~B() {
		cout << "B destructor" << endl;
		delete name;
		delete age;
	}

	virtual string getName() {
		cout << "B call getName" << endl;
		return *name;
	}
private:
	string *name;
};



#endif /* B_H_ */
