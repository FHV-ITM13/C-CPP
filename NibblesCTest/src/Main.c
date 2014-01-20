/*
 * Main.c
 *
 *  Created on: 20.01.2014
 *      Author: Stefan
 */

#include<stdio.h>


/*
 * Nibbler = Datenstruktur mit 4 Bits laenge
 */

struct Nibbler {
	unsigned nibbler :4;
} nibbler;

struct Nibblers {
	unsigned int first :4;
	unsigned int last :4;
} nibblers;

union UnionNibbler {
	struct {
		unsigned int first :4;
		unsigned int last : 4;
	};
	unsigned char byte_value;
} unionNibbler;

union UnionNibbler2 {
	struct {
		unsigned int first :4;
		unsigned int last :4;
	} nibblers;
	unsigned char byte_value;
} unionNibbler2;

struct CharNibbler {
	unsigned char first : 4;
	unsigned char last : 4;
} charNibbler;

int main() {

	printf("Size of int: %d\n\n", sizeof(int));


	printf("Size of nibbler: %d\n", sizeof(nibbler));
	printf("value of nibbler: %d\n", nibbler.nibbler);
	nibbler.nibbler = 15;
	printf("value of nibbler: %d\n\n", nibbler.nibbler);


	printf("Size of nibblers: %d\n", sizeof(nibbler));
	printf("value of nibblers: %d, %d\n", nibblers.first, nibblers.last);
	nibblers.first = 10;
	nibblers.last = 10;
	printf("value of nibblers: %d, %d\n\n", nibblers.first, nibblers.last);


	printf("Size of unionNibbler: %d\n\n", sizeof(unionNibbler));

	printf("Size of unionNibbler2: %d\n\n", sizeof(unionNibbler2));


	printf("Size of charNibbler: %d\n", sizeof(charNibbler));
	printf("value of charNibbler: %d, %d\n", charNibbler.first, charNibbler.last);
	charNibbler.first = 15;
	charNibbler.last = 14;
	printf("value of unionNibbler: %d, %d\n\n", charNibbler.first, charNibbler.last);

	char nibble = 50; //0011 0010
	printf("Size of nibble: %d\n", sizeof(nibble));
	printf("Value low nibble: %d\n", nibble & 0x0f);
	printf("Value high nibble: %d\n", (nibble & 0xf0) >> 4);
	printf("Value high nibble: %d\n", nibble >> 4);

	return 0;
}
