/*
 ============================================================================
 Name        : Const.c
 Author      : Thomas Gaida
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Start it"); /* prints Start it */


	withoutconst();

	return EXIT_SUCCESS;

}

void withoutconst()
{
	int x=5;
	int y=500;
	int* ptr=&x;

	printf("Value: %d",*ptr);
	printf("Speicherplatz: %p",ptr);

	ptr=&y;
	*ptr=10;

}

void contPtr()
{
	puts("Konstanter Pointer");

	int x=5;
	int y=500;
	int* const ptr=&x;

	printf("Value: %d",*ptr);
	printf("Speicherplatz: %p",ptr);

	ptr=&y;


	printf("Value: %d",*ptr);
	printf("Speicherplatz: %d",ptr);
}

void contvar()
{
	puts("Konstanter Pointer");

	int x=5;
    int y=100;
	const int* ptr=&x;

	printf("Value: %d",*ptr);
	printf("Speicherplatz: %d",ptr);

    *ptr=10;

	printf("Value: %d",*ptr);
	printf("Speicherplatz: %d",ptr);
}

void contPtrcontVar()
{
	puts("Konstanter Pointer");

	int x=5;
    int y=100;


    const int* const ptr=&x;

	printf("Value: %d",*ptr);
	printf("Speicherplatz: %d",ptr);

	ptr=&y;
	*ptr=10;

	printf("Value: %d",*ptr);
	printf("Speicherplatz: %d",ptr);
}
