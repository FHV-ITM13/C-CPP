/*
 * Main.c
 *
 *  Created on: 20.01.2014
 *      Author: Stefan
 */

#include<stdio.h>

int main() {

	int i = 5;
	int* pI = &i;

	/*
	 * Output:
	 * Size of int: 4
	 * Adr pointer: 0028FEE8
	 * Adr pointer: 0028FEF0
	 *
	 * Pointer will be increased by sizeof(int) * 2
	 */
	printf("Size of int: %d\n", sizeof(int));
	printf("Adr pointer: %p\n", pI);
	pI += 2;
	printf("Adr pointer: %p", pI);


	return 0;
}
