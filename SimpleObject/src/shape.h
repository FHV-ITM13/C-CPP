/*
 * shape.h
 *
 *  Created on: 06.11.2013
 *  Author: TEAM S,W,G
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#define draw(r) {r->clazz->draw(r);}

typedef struct ShapeObject shapeObject_t;

typedef struct ShapeClass {
	void (*draw) (shapeObject_t*);
} shapeClazz_t;

typedef struct ShapeObject {
	struct ShapeClass* clazz;
	int type;
} shapeObject_t;

shapeClazz_t shapeClazz;

void drawGeneric(shapeObject_t *s);

#endif
