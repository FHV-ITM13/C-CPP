/*
 * Stack.h
 *
 *  Created on: 19.01.2014
 *      Author: johannes
 */

#ifndef STACK_H_
#define STACK_H_

template<typename T, int size>
class Stack {
	friend std::ostream & operator <<(std::ostream & str, Stack<int, 5> & stack);

public:
	Stack() {
	}

	Stack(const Stack &cpy) {
		current = cpy.current;
		int s = sizeof(cpy.elements) / sizeof(cpy.elements[0]);

		if (s == size) {
			for (int i = 0; i < size; i++) {
				elements[i] = cpy.elements[i];
			}
		} else {
			std::cout << "idiot" << std::endl;
			throw "idiot";
		}
	}

	virtual ~Stack() {
	}

	void push(T value) {
		elements[++current] = value;
	}

	T pop() {
		return elements[current--];
	}

	const Stack operator=(const Stack &rhs) {
		if (this != &rhs) {
			Stack(rhs);
		}
		return *this;
	}

	const Stack operator +=(const T rhs) {
		this->push(rhs);
		return *this;
	}

private:
	int current = -1;
	T elements[size];
};

#endif /* STACK_H_ */
