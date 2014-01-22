/*
 ============================================================================
 Name        : Malloc.c
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

	int *ptr;
	ptr=malloc(sizeof(int));

	if(ptr!=NULL)
	{

		*ptr=10;
		printf("Value ptr: %d\n",*ptr);
		printf("Speicheradd ptr: %p\n",ptr);


	}

	free(ptr);
	ptr=NULL;

	return EXIT_SUCCESS;
}
