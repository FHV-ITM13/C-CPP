/*
 * Main.cpp
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "AbstractShape.h"

int main() {
	//AbstractShape as; //Compiler Error!
	Shape s;
	Circle c;
	Rectangle r;

	std::cout << "call print() methods (static binding):" << std::endl;
	s.print();
	c.print();
	r.print();

	std::cout << "call print() and print2() methods:" << std::endl;
	std::vector<Shape*> vector;
	vector.push_back(new Shape());
	vector.push_back(new Rectangle());
	vector.push_back(new Circle());

	std::vector<Shape*>::iterator iter = vector.begin();

	while (iter != vector.end()) {
		//only print of shape is called - still static binding
		(*iter)->print();
		// virtuell methods, tell compiler "Wait until it is used in a program
		// and then get the implementation from the object instance"
		// -> dynamic/late binding!
		(*iter)->print2();
		++iter;
	}

	std::cout << std::endl << std::endl;

	s.print2();
	s.print3();
	const Shape sConst;
	//sConst.print(); nicht moeglich!!
	sConst.print2();
	sConst.print3();

	std::cout << std::endl << std::endl;
	s.asdf();
	r.asdf();

	Shape rs = r;
	rs.asdf();


	return 0;
}
