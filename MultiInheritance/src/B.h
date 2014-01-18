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
using namespace std;

class B {

public:
	B()  { name = new string("B"); }
	virtual ~B() {
		cout << "B destructor" << endl;
		delete name;
	}

	virtual string getName() {
		cout << "B call getName" << endl;
		return *name;
	}
private:
	string *name;
};



#endif /* B_H_ */
