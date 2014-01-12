/*
 * Main.c
 *
 *  Created on: 06.10.2013
 *      Author: Stefan
 */
#include <stdio.h>
#include <stdlib.h>
#include "MyMath.h"

int main(int argc, char *argv[] ) {

	printf("Welcome to great epic square root calculator!\n\n");
	printf("Exit with input -1\n\n");

	float input;

	do {
		printf("Please enter the number: ");
		scanf("%f", &input);

		if(input != -1) {
			printf("\nCalculated square root: %f\n\n", calcSqrt(input));
		}
	} while(input != -1);

	printf("\nSee you!");

	return 0;
}
