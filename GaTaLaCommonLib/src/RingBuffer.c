/*
 * RingBuffer.c
 * Author: Gaida, Thaler, Laesser
 * Project: GaTaLa
 * Team: 7
 */

#include <stdio.h>
#include <stdlib.h>

#include "RingBuffer.h"

int rbInit(RingBuffer_t* buffer, int size) {
	if(buffer == NULL || size <= 0) {
		return 1; /* error */
	}

	buffer->size = size +1;
	buffer->start = 0;
	buffer->currIndex = -1;
	buffer->elems = (int*)calloc(buffer->size, sizeof(int)); //create vector
	return 0; /* success */
}

int rbWrite(RingBuffer_t* buffer, int value) {
	if(buffer == NULL ) {
		return 1; /* error */
	}

	/* first time we write */
	if(buffer->currIndex == -1) {
		buffer->currIndex = buffer->start;
	}

	buffer->elems[buffer->currIndex] = value;
	buffer->currIndex = (buffer->currIndex + 1) % buffer->size;

	return 0; /* success */
}

int rbIsEmpty(RingBuffer_t* buffer) {
	if(buffer == NULL) {
		return 1; /* error */
	}

	return buffer->currIndex == -1;
}

int rbRead(RingBuffer_t* buffer, int index) {
	if(buffer == NULL || index < 0) {
		return 1; /* error */
	}

	//check if index is inside buffer range
	if(buffer->size < index) {
		return 1; /* error */
	}

	return buffer->elems[index];
}

int rbFree(RingBuffer_t* buffer) {
	if(buffer == NULL) {
		return 1; /* error */
	}

	free(buffer->elems);
	buffer->currIndex = -1;

	return 0; /* success */
}
