/*
 * main.cpp
 *
 *  Created on: 21.01.2014
 *      Author: johannes
 */

#include"IntWrapper.h"

#include<iostream>

using namespace std;

int main() {
	IntWrapper x1 = 1;
	IntWrapper x2 = 3;
	x1.print();
	x2.print();

	IntWrapper x3 = x1 + x2;
	x3.print();

	cout << x3 << endl;
}
