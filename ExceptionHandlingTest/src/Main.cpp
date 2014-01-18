/*
 * Main.cpp
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#include <iostream>
#include <string>
#include "DirtyClass.h"
#include "CleanClass.h"



int main() {
	CleanClass *cc = new CleanClass();
	DirtyClass *dc = new DirtyClass();

	std::cout << "Clean cls: " << *cc->GetName() << std::endl;
	std::cout << "Dirty cls: " << *dc->GetName() << std::endl;
	std::cout << "Call throw Exception" << std::endl;

	try {
		std::cout << "Clean class" << std::endl;
		cc->ThrowException();
	} catch(const char * exception) {
		std::cout << "Catched exception" << std::endl;
		std::cout << "Clean cls: " << *cc->GetName() << std::endl;
		std::cout << "Destructor is not called!" << std::endl;
	}

	try {
		std::cout << "Dirty class" << std::endl;
		dc->ThrowException();
	} catch(const char * exception) {
		std::cout << "Catched exception" << std::endl;
		std::cout << "Dirty cls: " << *dc->GetName() << std::endl;

	}

	return 0;
}
