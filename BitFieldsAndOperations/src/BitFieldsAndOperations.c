/*
 ============================================================================
 Name        : BitFieldsAndOperations.c
 Author      : Mike
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* Laut ANSI C müssen die einzelnen
 Elemente von Bitfeldern vom Datentyp
 int oder unsigned int sein.*/

typedef struct {
	unsigned int valid :1;
	unsigned int color :4;
	unsigned int value :4;
} Bitfield1;

typedef struct {
	unsigned int valid :1;
	unsigned int color :1;
	unsigned int value :1;
} Bitfield2;

typedef struct {
	unsigned int sensor1 :1;
	unsigned int sensor2 :1;
	unsigned int sensor3 :1;
	unsigned int schalter :1;
	unsigned int Ausgabe :2;
} Bitfeld3;

typedef struct {
	unsigned int sensor1 :8;
	unsigned int sensor2 :8;
	unsigned int sensor3 :8;
	unsigned int schalter :8;
	unsigned int Ausgabe :8;
} Bitfeld4;

typedef struct {
	union {
		int x;
		double y;
	};
} Number;

int main(void) {

	/* Bitfields */
	Bitfield1 b1;
	printf("Size of Bitfield 1: %d\n", sizeof(b1));

	Bitfield2 b2;
	printf("Size of Bitfield 2: %d\n", sizeof(b2));

	Bitfeld3 b3;
	printf("Size of Bitfield 3: %d\n", sizeof(b3));

	Bitfeld4 b4;
	printf("Size of Bitfield 4: %d\n", sizeof(b4));

	/* Da Bitfelder keine adressierbare Speicherstelle belegen,
	 können Sie hierbei weder den Adressoperator & noch das Makro
	 offsetof anwenden. */

	/* Union */
	Number n1;
	printf("Size of double: %d\n", sizeof(double));
	printf("Size of Number Union: %d\n", sizeof(n1));

	n1.x = 1;
	printf("Size of Number Union: %d\n", sizeof(n1));

	n1.y = 1.0;
	printf("Size of Number Union: %d\n", sizeof(n1));

	printf("x of Number Union: %d\n", n1.x);
	printf("y of Number Union: %f\n", n1.y);

	int byte = 0x000000000;
	printf("Byte: %x\n", byte);

	/* Toggling */

	byte ^= 0x011;
	printf("Byte toggled: %x\n", byte);

	byte ^= 0x011;
	printf("Byte toggled: %x\n", byte);

	byte ^= 0x010000000;
	printf("Byte toggled: %x\n", byte);

	byte ^= 0x010000000;
	printf("Byte toggled: %x\n", byte);

	byte ^= 0x001000000;
	byte ^= 0x000100000;
	byte ^= 0x000010000;
	byte ^= 0x000001000;
	printf("Byte toggled: %x\n", byte);

	byte ^= 0x001000000;
	byte ^= 0x000100000;
	byte ^= 0x000010000;
	byte ^= 0x000001000;
	printf("Byte toggled: %x\n", byte);

	/* Bitoperations */

	byte |= 0x01;
	printf("Byte set: %x\n", byte);

	byte |= 0x01;
	printf("Byte again: %x\n", byte);

	byte |= 0x0101;
	printf("Byte set: %x\n", byte);

	byte &= 0x01;
	printf("Byte delete: %x\n", byte);

	byte &= 0x0100;
	printf("Byte delete: %x\n", byte);

	return EXIT_SUCCESS;
}
