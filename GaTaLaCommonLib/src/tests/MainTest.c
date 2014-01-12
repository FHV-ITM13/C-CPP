/*
 * MainTest.c
 * Author: Gaida, Thaler, Laesser
 * Project: GaTaLa
 * Team: 7
 */
#include<stdio.h>

#include "../RingBuffer.h"
#include "../Normalizer.h"

int main(void) {
	int result = testBuffer();
	result = result + testNormalizer();
	return result > 0;
}

int testBuffer() {
	printf("Ring buffer test:\n\n");
	RingBuffer_t rb;

	rbInit(&rb, 5);

	printf("Is empty: %d\n", rbIsEmpty(&rb));

	int i;
	for(i = 1; i <= rb.size; i++) {
		rbWrite(&rb, i);
	}

	printf("Is empty: %d\n", rbIsEmpty(&rb));

	for(i = 0; i < rb.size; i++) {
		printf("read value %d:%d\n", i, rbRead(&rb, i));
	}

	printf("\n");
	rbWrite(&rb, rb.size+1);

	for(i = 0; i < rb.size; i++) {
		printf("read value %d:%d\n", i, rbRead(&rb, i));
	}

	printf("\nfree\n");
	rbFree(&rb);
	printf("Is empty: %d\n", rbIsEmpty(&rb));

	return 0;
}

int testNormalizer() {
	printf("\n\nNormalizer test:\n\n");
	nInit(0, 10, 5, -1);

	nAddValue(1);
	nAddValue(2);
	nAddValue(3);
	printf("normalize: %f\n", nNormalize());

	nAddValue(12);
	printf("normalize: %f\n", nNormalize());

	nAddValue(7);
	printf("normalize: %f\n", nNormalize());

	nFree();
	return 0;
}
