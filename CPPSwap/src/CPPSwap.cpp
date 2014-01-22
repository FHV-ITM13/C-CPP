//============================================================================
// Name        : CPPSwap.cpp
// Author      : Thomas Gaida
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


template<typename T>
void swapIt(T *value1,T *value2)
{
	T tmp=*value1;
	*value1=*value2;
	*value2=tmp;

}


int main() {
	cout << "What the sh" << endl; // prints What the sh

	int a=5;
	int b=10;

	cout<<"a="<<a<<" b="<<b<<endl;
	swapIt(&a,&b);
	cout<<"a="<<a<<" b="<<b<<endl;

	return 0;
}
