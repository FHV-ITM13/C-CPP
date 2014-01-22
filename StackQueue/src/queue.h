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

	pQueueStart = NULL;
	pQueueEnd = NULL;
	pQueueFirst = NULL;
	pQueueBack = NULL;
}

int enqueue(int value) {
	if(abs(pQueueBack - pQueueFirst) == 0) {
		return -1;
	}

	if(pQueueFirst == NULL) {
		pQueueFirst = pQueueBack;
	}

	*pQueueBack = value;
	++pQueueBack;

	if(pQueueBack > pQueueEnd) {
		pQueueBack = pQueueStart;
	}

	return 0;
}

int dequeue() {
	if(pQueueFirst == pQueueBack || pQueueFirst == NULL) {
		return -1;
	}

	int value = *pQueueFirst;

	++pQueueFirst;
	if(pQueueFirst > pQueueEnd) {
		pQueueFirst = pQueueStart;
	}

	return value;
}

int elemsQueue() {
	return pQueueFirst == NULL ? -1 : abs(pQueueBack - pQueueFirst);
}


#endif /* QUEUE_H_ */
