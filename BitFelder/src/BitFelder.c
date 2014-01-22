/*
 ============================================================================
 Name        : BitFelder.c
 Author      : Thomas Gaida
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <dos.h>

#include "BitFelder.h"


struct status LPT1_status;

int main(void) {
	puts("What the sh"); /* prints What the sh */

	druckerstatus((char *) &LPT1_status);
	if (LPT1_status.busy && LPT1_status.online) {
		printf("Drucker ist bereit!\n");
		return EXIT_SUCCESS;
	} else if (!LPT1_status.online)
		printf("Drucker nicht online!\n");
	else if (LPT1_status.papier)
		printf("Kein Papier vorhanden!\n");
	else
		printf("Drucker ist nicht bereit!\n");

	return EXIT_SUCCESS;
}

/* Status am LPT1-Port auslesen */
void druckerstatus(char *statuszeiger) {
	*statuszeiger = ( LPT1_PORT + 1) & 0xF8;
}
