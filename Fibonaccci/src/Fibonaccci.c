/*
 ============================================================================
 Name        : Fibonaccci.c
 Author      : Thomas Gaida
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


long fibo(long n){

	if(n)
	{
		return (n<=2) ? n:fibo(n-2)+fibo(n-1);
	}
	return 0;
}

int main(void) {
	puts("What the sh"); /* prints What the sh */

	long f;
	long i=0;

	printf("Wieviele Fibo wollen sie ausgeben\n");
	scanf("%ld",&f);
	while(++i<f)
		printf("F(%ld)=%ld\n",i,fibo(i));

	return EXIT_SUCCESS;
}
