/*
 * DirtyClass.cpp
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#include <string>
#include "DirtyClass.h"

DirtyClass::DirtyClass() {
	name = new std::string("Dirty");
}

std::string *DirtyClass::GetName() {
	return name;
}

void DirtyClass::ThrowException() {
	throw "Dirty Exception";
}


