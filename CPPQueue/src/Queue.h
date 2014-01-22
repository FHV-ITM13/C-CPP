/*
 * Queue.h
 *
 *  Created on: 20.01.2014
 *      Author: GIGI
 */

#ifndef QUEUE_H_
#define QUEUE_H_


#include <iostream>
using namespace std;

template<typename T, int size>
class Queue {
public:
	Queue() {

		first = back = counter = 0;
	}
	~Queue() {

	}


bool put(T value)
{
	if(counter==sizeof(values)/sizeof(values[0]))
	{
		cout<<"Queue voll"<<endl;
		return 0;
	}
	else
	{
		++counter;
		values[back]=value;
		back=++back%size;
	}
}

T get(){

	if(counter==0)
	{
		cout<<"Queue leer"<<endl;
		return 0;
	}
	T tmp=values[first];
	first=++first%size;
	--counter;
	return tmp;

}

int getFirst() {
	return first;
}

int getBack() {
	return back;
}

private:
	T values[size];
	unsigned int first;
	unsigned int back;
	unsigned int counter;

};

#endif /* QUEUE_H_ */
