/*
 * Rectangle.h
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>
#include "Shape.h"

class Rectangle: public Shape {
public:
	Rectangle() {
	}

	void asdf() {
		//ueberdeckt!
		std::cout << "Rectangle asdf() - non-virtuell" << std::endl;
	}

	void print() {
		std::cout << "Rectangle print() - non-virtuell" << std::endl;
	}

	virtual void print2() {
		std::cout << "Rectangle print2() - virtuell" << std::endl;
	}
};

#endif /* RECTANGLE_H_ */
