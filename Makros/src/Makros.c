/*
 ============================================================================
 Name        : Makros.c
 Author      : Thomas Gaida
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


#define Kleiner_100(x) ((x)<100)


int TestKleiner100(int zahl)
{
	if(Kleiner_100(zahl))
		return 1;
	else
		return 0;
}

int main(void) {
	puts("What the sh"); /* prints What the sh */

	int zahl;
	printf("Geben sie eine Zahl 0-100 ein\n");
	scanf("%d",&zahl);
	if(TestKleiner100(zahl))
	{
		printf("Zahl ist kleiner als 100 \n");

	}
	else
	{
		printf("Zahl ist größser als 100 oder genau 100\n");
	}


	return EXIT_SUCCESS;
}
