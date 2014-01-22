/*
 ============================================================================
 Name        : ArrayTests.c
 Author      : Thomas Gaida
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10



struct array2{
	int wert[MAX];

};

int array[MAX];
struct array2 array2;

void function(int array[]){

	puts("Hier wird die Anfangsaddresse übergeben, also eine Refernez");
	array[0]=20;

}

void function2(struct array2 array)
{
	puts("Hier wird das Array als eine Kopie übergeben und nicht als Refernez");
	array.wert[0]=20;
}


int main(void) {
	puts("What the sh"); /* prints What the sh */

	array[0]=10;
	array2.wert[0]=10;

	printf("Wert array ohne struckt %d\n ",array[0]);
	printf("Wert array mit struckt %d\n ",array2.wert[0]);

	function(array);
	function2(array2);

	printf("Wert array ohne struckt %d\n ",array[0]);
	printf("Wert array mit struckt %d\n ",array2.wert[0]);



	return EXIT_SUCCESS;
}


