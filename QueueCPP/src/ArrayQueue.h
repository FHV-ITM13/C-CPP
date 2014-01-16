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
		first = back = elemsCounter = 0;
		this->size = size;
		elems = new T[size];
	}

	~ArrayQueue() {
		delete[] elems; //new => delete for killing
		//malloc -> free for tiding up!! IMPORTANT!
	}

	bool enqueue(const T &value) {
		//oder size aus ctor in variable speichern...
		//if(elemsCounter == size)) {
		if(elemsCounter == sizeof elems / sizeof elems[0]) {
			return false;
		}

		++elemsCounter;
		elems[back] = &value;
		//back = ++back % size;
		back = ++back % (sizeof elems / sizeof elems[0]);

		return true;
	}

	T& dequeue() {
		T& temp = elems[first];
		/*
		 * first wird einfach hoch gezaehlt
		 * wert wird ueberschrieben
		 */
		first = ++first % sizeof elems;
		--elemsCounter;
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
	 *
	 *Alternative zu Array w‰re ein Vektor
	 */
	T *elems;
	unsigned int first;
	unsigned int back;
	unsigned int elemsCounter;
	unsigned int size;
};

#endif /* ARRAYQUEUE_H_ */
