/*
 ============================================================================
 Name        : HelloWorld.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */


	int values[3] = {1,2,3};
	printf("%d,%d,%d\n",values[0],values[1],values[2]);

	values[0] = 10;
	*(values+1) = 20; // setzt Inhalt von values auf 10
	values[2] = 1;
	printf("%d,%d,%d\n",values[0],values[1],values[2]);





	return EXIT_SUCCESS;
}
