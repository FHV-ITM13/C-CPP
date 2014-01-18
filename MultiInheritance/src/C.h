/*
 * C.h
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#ifndef C_H_
#define C_H_


#include <string>
#include <iostream>
#include "A.h"
#include "B.h"
using namespace std;

class C: public A, public B {

public:
	C()  { name = new string("C"); }
	virtual ~C() {
		cout << "C destructor" << endl;
		delete name;
	}
	virtual string getName() {
		cout << "C call getName" << endl;
		return *name;
	}
private:
	string *name;
};


#endif /* C_H_ */
