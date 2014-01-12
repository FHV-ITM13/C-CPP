/*
 * Main.cpp
 *
 *  Created on: 08.01.2014
 *      Author: Stefan
 */
#include <iostream>
#include <string>
#include "NewsServer.h"
using namespace std;

void notifyMeth1(const string& value) {
	cout << "notify 1: " << value << endl;
}

void notifyMeth2(const string& value) {
	cout << "notify 2: " << value << endl;
}

void notifyMeth3(const string& value) {
	cout << "notify 3: " << value << endl;
}

int main() {
	NewsServer<string> srv;
	cout << "expect nothing" << endl;
	srv.propergate("nothing");

	cout << endl << "expect only notify 1" << endl;
	srv.reg(notifyMeth1);
	srv.propergate("test");

	cout  << endl << "expect notify 1 + 2" << endl;
	srv.reg(notifyMeth2);
	srv.propergate("test 2");

	cout << endl << "expect notify 1 + 2 + 3" << endl;
	srv.reg(notifyMeth3);
	srv.propergate("test 3");

	cout << endl <<"expect notify 2 + 3" << endl;
	srv.unreg(notifyMeth1);
	srv.propergate("test 4");

	return 0;
}


