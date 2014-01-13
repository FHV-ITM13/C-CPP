/*
 * rectangle.h
 *
 *  Created on: 06.11.2013
 *  Author: TEAM S,W,G
 */

#ifndef RECT_H_
#define RECT_H_

#include "shape.h"

#define new_Rectangle(w,h) initRectangle(w,h)

#define area(r) {r->clazz->area(r);}

// POSSIBLE ? #define r.draw() {r->clazz->area(r);}

typedef struct RectangleObject rectangleObject_t;

typedef struct RectangleClass {
	struct ShapeClass* baseClazz;

	void (*draw)(rectangleObject_t*);
	void (*area)(rectangleObject_t*);
} rectangleClazz_t;

typedef struct RectangleObject {
	struct RectangleClass* clazz;
	struct ShapeObject* baseObject;

	int w;
	int h;
} rectangleObject_t;

rectangleClazz_t rectangleClazz;

struct RectangleObject* initRectangle(int w, int h);

void drawRectangle(rectangleObject_t *r);

void areaRectangle(rectangleObject_t *r);

#endif

