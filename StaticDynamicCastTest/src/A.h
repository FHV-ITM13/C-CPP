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

class A : public Base {

public:
	A() {
		name = new string("A");
		age = new int(1);
	}
	virtual ~A() {
		cout << "A destructor" << endl;
		delete name;
	}

	virtual int getAge() {
		cout << "A getAge()" << endl;
		return *age;
	}

	virtual string getName() {
		cout << "A call getName" << endl;

		return *name;
	}
protected:
	string *name;
};



#endif /* A_H_ */
