/*
 * Shape.h
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include "AbstractShape.h"

class Shape : public AbstractShape {
public:
	Shape() { }
	~Shape() {	}

	void asdf () {
		std::cout << "Shape asdf() - non-virtuell" << std::endl;
	}

	virtual void print() {
		std::cout << "Shape print() - non-virtuell" << std::endl;
	}

	virtual void print2() {
		std::cout << "Shape print2() - virtuell" << std::endl;
	}

	virtual void print2() const {
		std::cout << "Shape print2() const - virtuell" << std::endl;
	}

	virtual void print3() const {
		std::cout << "Shape print3() const - virtuell" << std::endl;
	}
};


#endif /* SHAPE_H_ */
