/*
 * Shape.h
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>

class Shape {
public:
	Shape() { }
	~Shape() {	}
	void print() {
		std::cout << "Shape print() - non-virtuell" << std::endl;
	}

	virtual void print2() {
		std::cout << "Shape print2() - virtuell" << std::endl;
	}
};


#endif /* SHAPE_H_ */
