/*
 ============================================================================
 Name        : InlineTest.c
 Author      : Thomas Gaida
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "Inline.h"


/*Inline Funktionen werden direkt an die stelle kopiert wo der aufruf stattfinde
 *Dies entfällt der Sprung und die damit verbundene Speicherung des Stacks der Rücksprungadd.
 *Dadurch ist der Code schneller als wie wenn in eine Untermethode gewechselt werden muss.
 * */
inline int calc(int a,int b)
{
	return a+b;
}

int main(void) {
	puts("What the sh"); /* prints What the sh */

	int a=5;
	int b=10;
	int c;

	c=calc(a,b);
	printf("%d",c);


	return EXIT_SUCCESS;
}
