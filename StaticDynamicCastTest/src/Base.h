/*
 * Base.h
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#ifndef BASE_H_
#define BASE_H_


#include <string>
#include <iostream>
using namespace std;

class Base {

public:
	Base() {
		age = new int(0);
	}
	virtual ~Base() {
		cout << "Base destructor" << endl;
		delete age;
	}
	virtual int getAge() {
		cout << "Base call getAge" << endl;

		return *age;
	}

protected:
	int *age;
};


#endif /* BASE_H_ */
