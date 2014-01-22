/*
 ============================================================================
 Name        : Queue.c
 Author      : Thomas Gaida
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "Queue.h"

Reservierung *dummy;

void schlange_init(void) {
	if ((dummy = malloc(sizeof(Reservierung))) != NULL) {
		dummy->name = "NONE";
		dummy->previous = NULL;

	} else {
		fprintf(stderr, "Konnte keinen Speicher reservieren\n");

	}
}

void put(Reservierung *neu) {

	printf("PUT: %s\n", neu->name);

	/*Wenn Warteschlange noch leer*/
	if (dummy->previous == NULL) {
		dummy->previous = neu;
		neu->previous = NULL;

	} else {
		Reservierung *zeiger;
		zeiger = dummy;
		/*Suche Warteschlangen ende*/
		while (zeiger->previous != NULL) {
			zeiger = zeiger->previous;
		}
		zeiger->previous = neu;
		neu->previous = NULL;

	}
}

void get() {
	if (dummy->previous != NULL) {
		Reservierung *tmp;
		tmp = dummy->previous;
		dummy->previous = tmp->previous;
		printf("GET: %s\n", tmp->name);
		free(tmp);

	} else {
		fprintf(stderr, "Konnte keinen Speicher reservieren\n");
	}
}

int main(void) {
	puts("What the sh"); /* prints What the sh */

	schlange_init();

	Reservierung a1, a2, a3, a4;

	a1.name = "Gaida";
	a2.name = "Zagerle";
	a3.name = "Wachter";
	a4.name = "Lässer";

	put(&a1);
	put(&a2);
	get();
	put(&a3);
	put(&a4);
	get();
	get();
	get();

	free(dummy);
	dummy = NULL;

	return EXIT_SUCCESS;
}
