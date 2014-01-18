#include <stdio.h>
#include "MyMath.h"

float calcSqrt(float x) {
	if(x == 0) {
		return 0;
	}

	float root = x/2;
	float a = x/root;

	while(calcAbsoluteValue(a-root) > 0.0001) {
		root = (root + a) / 2;
		a = x/root;
		printf("Calc step:\n\troot=%f\n\ta=%f\n", root, a);
	}

	return root;
}

float calcAbsoluteValue(float value) {
	if(value < 0) {
		return -value;
	}

	return value;
	
	
}
