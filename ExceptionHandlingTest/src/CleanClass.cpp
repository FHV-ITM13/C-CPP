/*
 * CleanClass.cpp
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */
#include <string>
#include <iostream>
#include "CleanClass.h"
using namespace std;

CleanClass::CleanClass() {
	name = new string("Clean");
}

CleanClass::~CleanClass() {
	cout << "Clean class destructor call";
	delete name;
}

string* CleanClass::GetName() {
	return name;
}

void CleanClass::ThrowException() {
	throw "Clean Exception";
}
