/*
 * Stack
 *
 *  Created on: 19.01.2014
 *      Author: johannes
 */

#include <stdio.h>
#include <stdlib.h>
#include "List.h"

int main(void) {
	int i1 = 1, i2 = 2, i3 = 3, i4 = 4;
	push(&i1);
	push(&i2);
	push(&i3);
	push(&i4);

	printf("POP: %d, %d, %d, %d, %d \n", *(int*) pop(), *(int*) pop(),
			*(int*) pop(), *(int*) pop(), initialized);

	enqueue(&i1);
	enqueue(&i2);
	enqueue(&i3);
	enqueue(&i4);

	printf("DEQUEUE: %d, %d, %d, %d, %d \n", *(int*) dequeue(), *(int*) dequeue(),
			*(int*) dequeue(), *(int*) dequeue(), initialized);

	enqueue(&i1);
	enqueue(&i2);
	enqueue(&i3);
	enqueue(&i4);

	printf("MIX: %d, %d, %d, %d, %d \n", *(int*) pop(), *(int*) dequeue(),
			*(int*) pop(), *(int*) dequeue(), initialized);
}
