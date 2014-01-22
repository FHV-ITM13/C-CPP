/*
 * IntWrapper.h
 *
 *  Created on: 21.01.2014
 *      Author: johannes
 */

#ifndef INTWRAPPER_H_
#define INTWRAPPER_H_

#include<iostream>

using namespace std;

class IntWrapper {
	friend IntWrapper* operator+(IntWrapper p1, IntWrapper p2);
	friend ostream& operator<<(ostream& out, IntWrapper p);

public:
	IntWrapper(int i) {
		_i = i;
	}
	IntWrapper(IntWrapper* p) {
		_i = p->_i;
	}

	void print() {
		cout << _i << endl;
	}

private:
	int _i;
};

IntWrapper* operator+(IntWrapper p1, IntWrapper p2) {
	int i = p1._i + p2._i;

	return new IntWrapper(i);
}

ostream& operator<<(ostream& out, IntWrapper p) {
	return out << "<< " << p._i;
}

#endif /* INTWRAPPER_H_ */
