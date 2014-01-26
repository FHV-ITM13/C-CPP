/*
 ============================================================================
 Name        : UnionTest.c
 Author      : Thomas Gaida
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

struct test1 {
   char a;
   int b;
   double c;
};

union test2 {
   char a;
   int b;
   double c;
};

typedef unsigned char byte;

typedef union {
	int raw;
	struct {
		byte r;
		byte g;
		byte b;
	};
} color;

int main(void) {
   printf("struct test1 benoetigt %d Bytes\n", sizeof(struct test1));
   printf("Union test2  benoetigt %d Bytes\n", sizeof(union test2));
   printf("Union Color benoetigt %d Bytes\n", sizeof(color));

   color c;
   c.r = 12;
   c.g = 5;
   c.b = 255;
   printf("Color: r: %d, g: %d, b: %d\n", c.r, c.g, c.b);
   printf("Color: raw: %x\n", c.raw);

   return EXIT_SUCCESS;
}
