/*
 * Normalizer.c
 * Author: Gaida, Thaler, Laesser
 * Project: GaTaLa
 * Team: 7
 */

#include <stdio.h>
#include <stdlib.h>

#include "RingBuffer.h"

RingBuffer_t rb;
int 	_lower;
int 	_upper;
int 	_initVal;
int		_isFree;

void nInit (int lower, int upper, int size, int initVal) {
	rbInit(&rb, size);

	int i;
	for(i = 0; i < rb.size; i++) {
		rbWrite(&rb, initVal);
	}

	_initVal = initVal;
	_lower = lower;
	_upper = upper;
	_isFree = 0;
}

int nAddValue(int value) {
	if(_isFree == 1) {
		return 1;
	}

	return rbWrite(&rb, value);
}

float nNormalize() {
	if(_isFree == 1) {
		return 0.0;
	}

	float avg = 0.0;
	int i = 0;
	int numberOfVal = 0;

	for(i = 0; i < rb.size; i++) {
		int val = rbRead(&rb, i);

		//ignore init values
		if(val == _initVal) {
			continue;
		}

		if(val < _lower) {
			val = _lower;
		}

		if(val > _upper) {
			val = _upper;
		}

		avg += val;
		++numberOfVal;
	}

	printf("buffer: %f\n", avg);

	return avg/(float)numberOfVal;
}

int nFree() {
	_isFree = 1;
	return rbFree(&rb);
}
