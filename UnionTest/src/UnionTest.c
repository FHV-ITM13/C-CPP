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

int main(void) {
   printf("struct benoetigt %d Bytes\n", sizeof(struct test1));
   printf("Union  benoetigt %d Bytes\n", sizeof(union test2));
   return EXIT_SUCCESS;
}
