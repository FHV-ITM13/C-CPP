/*
 * List.h
 *
 *  Created on: 21.01.2014
 *      Author: johannes
 */

#ifndef LIST_H_
#define LIST_H_

class Element {
public:
	int value;
	int init;
	Element* next;
	Element* prev;
};

class List {
public:
	List() {
		_first = new Element();
		_last = _first;
	}
	virtual ~List() {
		// TODO delete everything between
	}

	void addTop(int x) {
		if (_first->init == 0) {
			_first->value = x;
			_first->init = 1;
		} else {
			Element* tmp = new Element();
			tmp->value = x;
			tmp->init = 1;
			tmp->prev = _first;

			_first->next = tmp;
			_first = tmp;
		}
	}

	int getTop() {
		if (_first->init == 0) {
			return 0;
		}

		int v = _first->value;
		Element* tmp = _first;

		if (_last == _first) {
			_first->init = 0;
		} else {
			_first = _first->prev;
			_first->next = 0;
		}

		delete tmp;
		return v;
	}

	int getBottom() {
		if (_last->init == 0) {
			return 0;
		}

		int v = _last->value;
		Element* tmp = _last;

		if (_last == _first) {
			_last->init = 0;
		} else {
			_last = _last->next;
			_last->prev = 0;
		}

		delete tmp;
		return v;
	}

private:
	Element* _first;
	Element* _last;
};

class Stack: private List {
public:
	Stack() {
	}
	virtual ~Stack() {
	}

	void push(int x) {
		List::addTop(x);
	}

	int pop() {
		return List::getTop();
	}
};

class Queue: private List {
public:
	Queue() {
	}
	virtual ~Queue() {
	}

	void enqueue(int x) {
		List::addTop(x);
	}

	int dequeue(){
		return List::getBottom();
	}
};

#endif /* LIST_H_ */
