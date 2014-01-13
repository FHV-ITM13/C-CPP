/*
 * square.c
 *
 *  Created on: 06.11.2013
 *      Author: johannes
 */

#include "square.h"

squareClazz_t squareClazz = { &rectangleClazz, drawSquare, areaSquare };

squareObject_t* initSquare(int w) {
	rectangleObject_t* r = new_Rectangle(w, w);

	squareObject_t* s = malloc(sizeof(squareObject_t));
	s->clazz = &squareClazz;
	s->baseObject = r;

	return s;
}

void drawSquare(squareObject_t *r) {
	draw(r->baseObject);
}

void areaSquare(squareObject_t *r) {
	area(r->baseObject);
}
