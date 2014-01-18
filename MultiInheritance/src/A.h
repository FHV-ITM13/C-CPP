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
using namespace std;

class A {

public:
	A() { name = new string("A"); }
	virtual ~A() {
		cout << "A destructor" << endl;
		delete name;
	}
	virtual string getName() {
		cout << "A call getName" << endl;

		return *name;
	}
private:
	string *name;
};



#endif /* A_H_ */
