/*
 * square.h
 *
 *  Created on: 06.11.2013
 *      Author: johannes
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include "rectangle.h"

#define new_Square(w) initSquare(w)

typedef struct SquareObject squareObject_t;

typedef struct squareClass {
	rectangleClazz_t* baseClazz;

	void (*draw)(squareObject_t*);
	void (*area)(squareObject_t*);
} squareClazz_t;

typedef struct SquareObject {
	squareClazz_t* clazz;
	rectangleObject_t* baseObject;
} squareObject_t;

squareClazz_t squareClazz;

squareObject_t* initSquare(int w);

void drawSquare(squareObject_t *r);

void areaSquare(squareObject_t *r);

#endif /* SQUARE_H_ */
