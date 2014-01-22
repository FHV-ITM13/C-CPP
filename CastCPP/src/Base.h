/*
 * Base.h
 *
 *  Created on: 19.01.2014
 *      Author: johannes
 */

#ifndef BASE_H_
#define BASE_H_

#include <string>
using namespace std;

class Base {
public:
	Base();
	virtual ~Base();
	virtual string print();
	virtual int getAge();
};

#endif /* BASE_H_ */
