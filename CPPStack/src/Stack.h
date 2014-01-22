/*
 * Stack.h
 *
 *  Created on: 20.01.2014
 *      Author: GIGI
 */

#ifndef STACK_H_
#define STACK_H_

#include <iostream>
using namespace std;

template<typename T, int size>
class Stack {
public:
	Stack() {

		next = -1;

	}
	~Stack() {

	}


bool push(T value)
{
	if(next==sizeof(values)/sizeof(values[0]))
	{
		cout<<"Stack voll"<<endl;
		return 0;
	}
	else
	{
		++next;
		values[next]=value;
	}
}

T pop(){

	if(next==-1)
	{
		cout<<"Stack leer"<<endl;
		return 0;
	}
	T tmp=values[next];
	--next;
	return tmp;

}


private:
	T values[size];
	unsigned int next;

};


#endif /* STACK_H_ */
