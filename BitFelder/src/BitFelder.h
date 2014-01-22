/*
 * BitFelder.h
 *
 *  Created on: 18.01.2014
 *      Author: GIGI
 */

#ifndef BITFELDER_H_
#define BITFELDER_H_
/* 0x378 ist die Adresse der Schnittstelle von LPT1. */
#define LPT1_PORT 0x378


struct status {
	unsigned :3; /* Bit 0-2 nicht verwendet */
	unsigned fehler :1; /* 0=Druckerfehler         */
	unsigned online :1; /* 1=Drucker online        */
	unsigned papier :1; /* 1=kein Papier           */
	unsigned empfang :1; /* Empfangsbestätigung     */
	unsigned busy :1; /* Drucker bereit          */
};

void druckerstatus(char *statuszeiger);



#endif /* BITFELDER_H_ */
