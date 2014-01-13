/*
 * rectangle.c
 *
 *  Created on: 06.11.2013
 *  Author: TEAM S,W,G
 */

#include "shape.h"
#include "rectangle.h"

rectangleClazz_t rectangleClazz = { &shapeClazz, drawRectangle, areaRectangle };

rectangleObject_t* initRectangle(int w, int h) {
	printf("\tinit shape\n");
	shapeObject_t* s = malloc(sizeof(shapeObject_t));
	s->clazz = &shapeClazz;
	s->type = 1;
	printf("\tend init shape\n");

	printf("\tinit rect\n");
	rectangleObject_t* r = malloc(sizeof(rectangleObject_t));
	r->clazz = &rectangleClazz;
	r->baseObject = s;
	r->h = h;
	r->w = w;

	printf("\tRect: %d x %d, Shape: %d\n", r->h, r->w, s->type);

	printf("\tend init rect\n");

	return r;
}

void drawRectangle(rectangleObject_t *r) {
	printf("Draw: %d x %d\n", r->h, r->w);
}

void areaRectangle(rectangleObject_t *r) {
	printf("Area: %d\n", r->h * r->w);
}
