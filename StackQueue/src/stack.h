/*
 * stack.h
 *
 *  Created on: 21.01.2014
 *      Author: Stefan
 */

#ifndef STACK_H_
#define STACK_H_

#include<stdio.h>
#include<malloc.h>

int *pStackStart;
int *pStack;
int *pStackEnd;

int initStack(int size) {
	if(size <= 0)
		return -1;

	if((pStack = malloc(sizeof(void)* size)) != NULL) {
		pStackEnd = pStack + (sizeof(void) * size);
		pStackStart = pStack;

		printf("Adr Stack: %p\tAdr Stack End: %p\n", pStack, pStackEnd);
		return 0;
	}

	return -1;
}

void freeStack() {
	while(pStackStart <= pStackEnd) {
		free(pStackStart);
		++pStackStart;
	}

	pStackStart = NULL;
	pStack = NULL;
	pStackEnd = NULL;
}

int push(int value) {
	if(pStack == pStackEnd) {
		return -1; //full
	}

	*pStack = value;
	++pStack;

	return 0;
}

int pop() {
	if(pStack == pStackStart) {
		return -1;
	}

	return *--pStack;
}

int elems() {
	return pStack == NULL ? -1 : pStack - pStackStart;
}

#endif /* STACK_H_ */
