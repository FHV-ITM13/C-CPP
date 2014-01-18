/*
 * ArrayQueue.h
 *
 *  Created on: 13.01.2014
 *      Author: Stefan
 */
#ifndef ARRAYQUEUE_H_
#define ARRAYQUEUE_H_

template<typename T, int size>
class ArrayQueue {
public:
	ArrayQueue() {
		first = back = elemsCounter = 0;
	}

	~ArrayQueue() {
		//new => delete for killing
		//malloc -> free for tiding up!! IMPORTANT!
	}

	bool enqueue(T value) {
		//oder size aus ctor in variable speichern...
		//oder size als non-type angeben lassen
		//if(elemsCounter == size)) {
		if(elemsCounter == sizeof elems / sizeof elems[0]) {
			return false;
		}

		++elemsCounter;
		elems[back] = value;
		back = ++back % size;

		return true;
	}

	T dequeue() {
		if(elemsCounter == 0) {
			return NULL;
		}

		T temp = elems[first];
		/*
		 * first wird einfach hoch gezaehlt
		 * wert wird ueberschrieben
		 */
		first = ++first % size;
		--elemsCounter;
		return temp;
	}

	bool isEmpty() {
		return first == back;
	}

	int allocated() {
		return elemsCounter;
		//alternative
		//return back >= first ? back - first : first - back;
	}

	int getFirst() {
		return first;
	}

	int getBack() {
		return back;
	}

private:
	/*
	 * array wird mit new erzeugt, daher T *elems...
	 * array kann nicht auf dem stack erzeugt werden, da die groeﬂe bei arrays auf
	 * dem stack sofort angegeben werden muss
	 *
	 * Alternative zu Array w‰re ein Vektor oder wie hier jetzt groesse via template
	 */
	T elems[size];
	unsigned int first;
	unsigned int back;
	unsigned int elemsCounter;
};

#endif /* ARRAYQUEUE_H_ */
