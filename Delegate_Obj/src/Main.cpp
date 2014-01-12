/*
 * Main.cpp
 *
 *  Created on: 08.01.2014
 *      Author: Stefan
 */
#include <iostream>
#include <string>
#include "NewsServer.h"
#include "Consumer.h"

using namespace std;

int main() {
	NewsServer srv;
	Consumer c1("consumer 1");
	Consumer c2("consumer 2");
	Consumer c3("consumer 3");

	cout << "expect nothing" << endl;
	srv.propergate("nothing");

	cout << endl << "expect only consumer 1" << endl;
	srv.reg(c1);
	srv.propergate("test");

	cout  << endl << "expect consumer 1 + 2" << endl;
	srv.reg(c2);
	srv.propergate("test 2");

	cout << endl << "expect consumer 1 + 2 + 3" << endl;
	srv.reg(c3);
	srv.propergate("test 3");

	cout << endl <<"expect consumer 2 + 3" << endl;
	srv.unreg(c1);
	srv.propergate("test 4");

	return 0;
}


