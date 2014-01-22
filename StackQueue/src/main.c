/*
 * main.c
 *
 *  Created on: 21.01.2014
 *      Author: Stefan
 */
#include<stdio.h>
#include "stack.h"
#include "queue.h"

int main() {
	initStack(5);
	printf("pop empty stack: %i\n", pop());
	printf("push: %d\n", push(1));
	printf("elems: %d\n", elems());
	printf("push: %d\n", push(2));
	printf("elems: %d\n", elems());
	printf("push: %d\n", push(3));
	printf("elems: %d\n", elems());
	printf("pop: %i\n", pop());
	printf("elems: %d\n", elems());
	printf("push: %d\n", push(4));
	printf("elems: %d\n", elems());
	printf("push: %d\n", push(5));
	printf("elems: %d\n", elems());
	printf("push: %d\n", push(6));
	printf("elems: %d\n", elems());
	printf("pop: %i\n", pop());
	printf("elems: %d\n", elems());
	printf("pop: %i\n", pop());
	printf("elems: %d\n", elems());
	printf("pop: %i\n", pop());
	printf("elems: %d\n", elems());
	printf("pop: %i\n", pop());
	printf("elems: %d\n", elems());
	printf("pop: %i\n", pop());
	printf("elems: %d\n", elems());
	printf("pop: %i\n", pop());
	printf("elems: %d\n", elems());
	freeStack();


	initQueue(3);
	printf("dequeue empty queue: %i", dequeue());
	printf("enqueue: %d\n", enqueue(1));
	printf("elems: %d\n", elemsQueue());
	printf("enqueue: %d\n", enqueue(2));
	printf("elems: %d\n", elemsQueue());
	printf("enqueue: %d\n", enqueue(3));
	printf("elems: %d\n", elemsQueue());

	freeQueue();
	return 0;
}
