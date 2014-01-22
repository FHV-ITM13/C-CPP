/*
 * Stack
 *
 *  Created on: 19.01.2014
 *      Author: johannes
 */

#include <stdio.h>
#include <stdlib.h>
#include "List.h"

// Alignment requirements
// (typical 32 bit machine)

// char         1 byte
// short int    2 bytes
// int          4 bytes
// double       8 bytes

// structure A
typedef struct structa_tag {
	int x;
} structa_t;

// structure B
typedef struct structb_tag {
	short int s;
	char c;
	int i;
} structb_t;

// structure C
typedef struct structc_tag {
	char c;
	double d;
	int s;
} structc_t;

// structure D
typedef struct structd_tag {
	double d;
	int s;
	char c;
} structd_t;

int main() {
	printf("sizeof(structa_t) = %d\n", sizeof(structa_t));
	printf("sizeof(structb_t) = %d\n", sizeof(structb_t));
	printf("sizeof(structc_t) = %d\n", sizeof(structc_t));
	printf("sizeof(structd_t) = %d\n", sizeof(structd_t));

	printf("int: %d, double: %d, char: %d\n", sizeof(int), sizeof(double), sizeof(char));

	int values[] = { 1, 2, 3, 4 };
	*(values + 1) = 10;
	const int * pValues = values;
	printf("Array: %d, %p \n", *pValues, pValues);
	pValues += 1;
	printf("Array: %d, %p \n", *pValues, pValues);

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

	printf("DEQUEUE: %d, %d, %d, %d, %d \n", *(int*) dequeue(),
			*(int*) dequeue(), *(int*) dequeue(), *(int*) dequeue(),
			initialized);

	enqueue(&i1);
	enqueue(&i2);
	enqueue(&i3);
	enqueue(&i4);

	printf("MIX: %d, %d, %d, %d, %d \n", *(int*) pop(), *(int*) dequeue(),
			*(int*) pop(), *(int*) dequeue(), initialized);
}
