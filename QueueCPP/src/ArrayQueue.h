/*
 * ArrayQueue.h
 *
 *  Created on: 13.01.2014
 *      Author: Stefan
 */
#ifndef ARRAYQUEUE_H_
#define ARRAYQUEUE_H_

template<typename T>
class ArrayQueue {
public:
	ArrayQueue(unsigned int size) {
		first = 0;
		back = 0;
		elems = new T[size];
	}

	~ArrayQueue() {
		delete[] elems; //new => delete for killing
		//malloc -> free for tiding up!! IMPORTANT!
	}

	void enqueue(const T &value) {
		elems[back] = &value;
		back = ++back % sizeof elems;
	}

	T& dequeue() {
		T& temp = &elems[first];
		/*
		 * first wird einfach hoch gezaehlt
		 * wert wird ueberschrieben
		 */
		first = ++first % sizeof elems;
		return temp;
	}

	bool isEmpty() {
		return first == back;
	}

private:
	/*
	 * array wird mit new erzeugt, daher T *elems..
	 * array kann nicht auf dem stack erzeugt werden, da die groeﬂe bei arrays auf
	 * dem stack sofort angegeben werden muss??
	 * auf objekte, die mit new erzeugt werden sind nur pointer erlaubt!
	 */
	T *elems;
	unsigned int first;
	unsigned int back;
};

#endif /* ARRAYQUEUE_H_ */
