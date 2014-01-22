/*
 * queue.h
 *
 *  Created on: 21.01.2014
 *      Author: Stefan
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include<stdio.h>
#include<malloc.h>
#include<math.h>

int *pQueueStart;
int *pQueueEnd;
int *pQueueFirst;
int *pQueueBack;
int _size;

int initQueue(int size) {
	if(size <= 0)
		return -1;

	_size = size;

	if((pQueueStart = malloc(sizeof(void)* size)) != NULL) {
		pQueueEnd = pQueueStart + (sizeof(void) * size);
		pQueueBack = pQueueStart;
		pQueueFirst = NULL;

		printf("Adr Queue: %p\tAdr Queue End: %p\n", pStack, pStackEnd);
		return 0;
	}

	return -1;
}

void freeQueue() {
	while(pQueueStart <= pQueueEnd) {
		free(pQueueStart);
		++pQueueStart;
	}
}

int enqueue(int value) {
	if(abs(pQueueBack - pQueueFirst) == 0) {
		return -1;
	}

	*pQueueBack = value;
	pQueueFirst = pQueueBack;
	pQueueBack = ++pQueueBack % _size;

	return 0;
}

int dequeue() {
	if(pQueueFirst == pQueueBack || pQueueFirst == NULL) {
		return -1;
	}

	int value = *pQueueFirst;
	pQueueFirst = --pQueueFirst % _size;

	return value;
}

int elemsQueue() {
	return pQueueFirst == NULL ? 0 : abs(pQueueBack - pQueueFirst);
}


#endif /* QUEUE_H_ */
