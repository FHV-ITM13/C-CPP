/*
 * Main.c
 *
 *  Created on: 20.01.2014
 *      Author: Stefan
 */

#include<stdio.h>
// Alignment requirements
// (typical 32 bit machine)

// char         1 byte
// short int    2 bytes
// int          4 bytes
// double       8 bytes

// structure A
typedef struct structa_tag {
	char c;
	short int s;
} structa_t;

// structure B
typedef struct structb_tag {
	short int s;
	char c;
	int i;
} structb_t;

// structure C
typedef struct structc_tag {
	char c;
	double d;
	int s;
} structc_t;

// structure D
typedef struct structd_tag {
	double d;
	int s;
	char c;
} structd_t;

int main() {
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(double) = %d\n", sizeof(double));
	printf("sizeof(short int ) = %d\n", sizeof(short int));
	printf("sizeof(char) = %d\n", sizeof(char));

	printf("sizeof(structa_t) = %d\n", sizeof(structa_t));
	printf("sizeof(structb_t) = %d\n", sizeof(structb_t));
	printf("sizeof(structc_t) = %d\n", sizeof(structc_t));
	printf("sizeof(structd_t) = %d\n", sizeof(structd_t));

	int i = 5;
	int *p = &i;

	printf("sizeof(int*) = %d\n", sizeof(p));

	double d  = 5.0;
	double *pD = &d;

	printf("sizeof(double*) = %d\n", sizeof(pD));

	char a = 'a';
	char *str ="a";
	printf("sizeof(''a'') = %d\n", sizeof("a")); //liefert 2
	printf("sizeof('a') = %d\n", sizeof('a')); //als int interpretiert
	printf("sizeof(char *str=''a'') = %d\n", sizeof(*str)); //liefert 1
	printf("sizeof(char a = 'a') = %d\n", sizeof(a)); // liefert 1
	return 0;
}
