/*
 ============================================================================
 Name        : Swap.c
 Author      : Thomas Gaida
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "Swap.h"

int main(void) {
	puts("Start it"); /* prints Start it */

	int a=5;
	int b=10;

	printf("Value of a %d\nValue of b %d\n",a,b);

	Swap(&a,&b);

	printf("Value of a %d\nValue of b %d\n",a,b);

	return EXIT_SUCCESS;
}


void Swap(int *a, int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
