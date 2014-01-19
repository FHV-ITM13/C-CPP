/*
 * A.h
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#ifndef A_H_
#define A_H_

#include <string>
#include <iostream>
#include "Base.h"
using namespace std;

class B {

public:
	B() {
		name = new string("B");
	}
	~B() {
		cout << "B destructor" << endl;
		delete name;
	}

	string getName() {
		cout << "B call getName" << endl;

		return *name;
	}
protected:
	string *name;
};



#endif /* A_H_ */
