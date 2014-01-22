/*
 * Main.cpp
 *
 *  Created on: 15.01.2014
 *      Author: Stefan
 */

#include "List.h"
#include <string>
#include <iostream>
#include <ostream>

using namespace std;

class A {
public:
	void doIt() {
		cout << "A" << endl;
	}

	virtual void doIt2() {
		cout << "A virtuel" << endl;
	}
};
class B: public A {
public:
	void doIt() {
		cout << "B" << endl;
	}

	virtual void doIt2() {
		cout << "B virtuel" << endl;
	}
};

int main() {
	A a;
	B b;

	A* pa;
	B* pb = &b;

	pa = pb;
	pa->doIt();
	pa->doIt2();

	a = b;
	a.doIt();
	a.doIt2();

	Stack s;
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);

	cout << s.pop() << ", " << s.pop() << ", " << s.pop() << ", " << s.pop()
			<< ", " << s.pop() << endl;

	Queue q;
	q.enqueue(5);
	q.enqueue(4);
	q.enqueue(3);
	q.enqueue(2);
	q.enqueue(1);

	cout << q.dequeue() << ", " << q.dequeue() << ", " << q.dequeue() << ", "
			<< q.dequeue() << ", " << q.dequeue() << endl;

	List l;

	l.addTop(5);
	l.addTop(4);
	l.addTop(3);
	l.addTop(2);
	l.addTop(1);

	cout << l.getBottom() << ", " << l.getBottom() << ", " << l.getBottom()
			<< ", " << l.getBottom() << ", " << l.getBottom() << endl;

	l.addTop(5);
	l.addTop(4);
	l.addTop(3);
	l.addTop(2);
	l.addTop(1);

	cout << l.getTop() << ", " << l.getBottom() << ", " << l.getTop() << ", "
			<< l.getBottom() << ", " << l.getTop() << endl;
}
