/*
 * B.h
 *
 *  Created on: 19.01.2014
 *      Author: johannes
 */

#include "Base.h"
#include <string>

#ifndef B_H_
#define B_H_

#include<string>
using namespace std;

class B: public Base {
public:
	B();
	virtual ~B();
	virtual string print();
	string getName();
};

#endif /* B_H_ */
