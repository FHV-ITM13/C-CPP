/*
 * Circle.h
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */


#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <iostream>
#include "Shape.h"

class Circle : public Shape {
public:
	Circle() { }
	virtual void print() {
		std::cout << "Circle print() - non-virtuell" << std::endl;
	}

	virtual void print2() {
		std::cout << "Circle print2() - virtuell" << std::endl;
	}
};

#endif /* CIRCLE_H_ */

