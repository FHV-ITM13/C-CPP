/*
 * RingBuffer.h
 * Author: Gaida, Thaler, Laesser
 * Project: GaTaLa
 * Team: 7
 */
#ifndef RINGBUFFER_H_
#define RINGBUFFER_H_

typedef struct {
	int		size;		/* defines how many elements we save */
	int 	start;
	int 	currIndex;	/* current index */
	int*	elems;		/* pointer to first element - vector */
} RingBuffer_t;

int 	rbInit		(RingBuffer_t* buffer, int size);
int 	rbWrite		(RingBuffer_t* buffer, int value);
int 	rbIsEmpty	(RingBuffer_t* buffer);
int 	rbRead		(RingBuffer_t* buffer, int index);
int 	rbFree		(RingBuffer_t* buffer);
#endif
