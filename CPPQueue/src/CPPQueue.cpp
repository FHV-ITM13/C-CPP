//============================================================================
// Name        : CPPQueue.cpp
// Author      : Thomas Gaida
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
	cout << "What the sh" << endl; // prints What the sh

	Queue<int,5> *queue=new Queue<int,5>();

	queue->put(5);
	queue->put(4);
	queue->put(3);
	queue->put(2);

	cout<<queue->get()<<endl;
	cout<<queue->get()<<endl;
	cout<<queue->get()<<endl;
	cout<<queue->get()<<endl;

	delete queue;

	return 0;
}
