/*
 ============================================================================
 Name        : Zahlenspiel.c
 Author      : Thomas Gaida
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("What the sh\n"); /* prints What the sh */

	int i;

	printf("Geben sie eine Zahl ein\n");
	scanf("%d",&i);

	if(i&1)
	{
		puts("\nZahl gerade\n");
	}
	else
	{
		puts("Zahl ungerade\n");

	}


	return EXIT_SUCCESS;
}
