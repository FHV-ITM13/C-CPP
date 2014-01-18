/*
 * Main.cpp
 *
 *  Created on: 13.01.2014
 *      Author: Stefan
 */
#include <iostream>
#include <string>

#include "ArrayQueue.h"
#include "PointerQueue.h"

using namespace std;

void testArrayQueue();

int main() {
	testArrayQueue();

	testPointerQueue();
	return 0;
}

void testPointerQueue() {
	cout << "Test pointer queue" << endl;
//	ArrayQueue<int, 5> aqueue;
//	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;
//	cout << "isEmpty: " << aqueue.isEmpty() << endl;
//	cout << "allocated: " << aqueue.allocated() << endl;
//
//	cout << endl << "enqueue: " << aqueue.enqueue(1) << endl;
//	cout << "isEmpty: " << aqueue.isEmpty() << endl;
//	cout << "allocated: " << aqueue.allocated() << endl;
//	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;
//
//	cout << endl << "dequeue: " << aqueue.dequeue() << endl;
//	cout << "isEmpty: " << aqueue.isEmpty() << endl;
//	cout << "allocated: " << aqueue.allocated() << endl;
//	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;
//
//	cout << endl << "enqueue: " << aqueue.enqueue(2) << endl;
//	cout << "isEmpty: " << aqueue.isEmpty() << endl;
//	cout << "allocated: " << aqueue.allocated() << endl;
//	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;
//
//	cout << endl << "enqueue: " << aqueue.enqueue(3) << endl;
//	cout << "isEmpty: " << aqueue.isEmpty() << endl;
//	cout << "allocated: " << aqueue.allocated() << endl;
//	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;
//
//	cout << endl << "dequeue: " << aqueue.dequeue() << endl;
//	cout << "isEmpty: " << aqueue.isEmpty() << endl;
//	cout << "allocated: " << aqueue.allocated() << endl;
//	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;
//
//	cout << endl << "enqueue: " << aqueue.enqueue(4) << endl;
//	cout << "isEmpty: " << aqueue.isEmpty() << endl;
//	cout << "allocated: " << aqueue.allocated() << endl;
//	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;
//
//	cout << endl << "dequeue: " << aqueue.dequeue() << endl;
//	cout << "isEmpty: " << aqueue.isEmpty() << endl;
//	cout << "allocated: " << aqueue.allocated() << endl;
//	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;
//
//	cout << endl << "dequeue: " << aqueue.dequeue() << endl;
//	cout << "isEmpty: " << aqueue.isEmpty() << endl;
//	cout << "allocated: " << aqueue.allocated() << endl;
//	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;
//
//	cout << endl << "NOTHING IN QUEUE!" << endl;
//	cout << "dequeue: " << aqueue.dequeue() << endl;
//	cout << "isEmpty: " << aqueue.isEmpty() << endl;
//	cout << "allocated: " << aqueue.allocated() << endl;
//	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;

}

void testArrayQueue() {
	cout << "Test array queue" << endl;
	ArrayQueue<int, 5> aqueue;
	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;
	cout << "isEmpty: " << aqueue.isEmpty() << endl;
	cout << "allocated: " << aqueue.allocated() << endl;

	cout << endl << "enqueue: " << aqueue.enqueue(1) << endl;
	cout << "isEmpty: " << aqueue.isEmpty() << endl;
	cout << "allocated: " << aqueue.allocated() << endl;
	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;

	cout << endl << "dequeue: " << aqueue.dequeue() << endl;
	cout << "isEmpty: " << aqueue.isEmpty() << endl;
	cout << "allocated: " << aqueue.allocated() << endl;
	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;

	cout << endl << "enqueue: " << aqueue.enqueue(2) << endl;
	cout << "isEmpty: " << aqueue.isEmpty() << endl;
	cout << "allocated: " << aqueue.allocated() << endl;
	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;

	cout << endl << "enqueue: " << aqueue.enqueue(3) << endl;
	cout << "isEmpty: " << aqueue.isEmpty() << endl;
	cout << "allocated: " << aqueue.allocated() << endl;
	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;

	cout << endl << "dequeue: " << aqueue.dequeue() << endl;
	cout << "isEmpty: " << aqueue.isEmpty() << endl;
	cout << "allocated: " << aqueue.allocated() << endl;
	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;

	cout << endl << "enqueue: " << aqueue.enqueue(4) << endl;
	cout << "isEmpty: " << aqueue.isEmpty() << endl;
	cout << "allocated: " << aqueue.allocated() << endl;
	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;

	cout << endl << "dequeue: " << aqueue.dequeue() << endl;
	cout << "isEmpty: " << aqueue.isEmpty() << endl;
	cout << "allocated: " << aqueue.allocated() << endl;
	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;

	cout << endl << "dequeue: " << aqueue.dequeue() << endl;
	cout << "isEmpty: " << aqueue.isEmpty() << endl;
	cout << "allocated: " << aqueue.allocated() << endl;
	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;

	cout << endl << "NOTHING IN QUEUE!" << endl;
	cout << "dequeue: " << aqueue.dequeue() << endl;
	cout << "isEmpty: " << aqueue.isEmpty() << endl;
	cout << "allocated: " << aqueue.allocated() << endl;
	cout << "first: " << aqueue.getFirst() << " back: " << aqueue.getBack() << endl;

}

