//============================================================================
// Name        : JohannesTemplate.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Stack.h"
using namespace std;

std::ostream & operator <<(std::ostream &str, Stack<int, 5> &stack){
	str<<stack.pop();
	return str;
}

int main() {
	volatile int a = 1, b = 2, c = 5;
	a = c = b;
	cout << a << ", " << b << ", " << c << endl;

	Stack<int, 5> stack;
	stack.push(4);
	stack.push(3);
	stack.push(2);
	stack.push(1);

	Stack<int, 5> s2 = stack;
	s2 += 5;
	s2 += 6;

	cout << s2 << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
