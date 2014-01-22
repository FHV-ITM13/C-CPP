/*
 * main.c
 *
 *  Created on: 21.01.2014
 *      Author: johannes
 */

typedef struct ShapeObject shape_t;
typedef struct RectangleObject rect_t;

struct ShapeClass {
	void (*print)(shape_t*);
};

struct RectangleClass {
	struct ShapeClass * baseClazz;
	int (*area)(rect_t*);
};

struct ShapeClass * shapeClass;
struct RectangleClass * rectClass;

typedef struct ShapeObject {
	struct ShapeClass * clazz;
	int x;
	int y;
} shape_t;

typedef struct RectangleObject {
	struct RectangleClass * clazz;
	shape_t * baseObject;
	int w;
	int h;
} rect_t;

shape_t * newShape(int x, int y) {
	shape_t * s = (shape_t*) malloc(sizeof(shape_t));
	s->clazz = shapeClass;
	s->x = x;
	s->y = y;
	return s;
}

rect_t * newRect(int x, int y, int w, int h) {
	shape_t * s = newShape(x, y);
	rect_t * r = (rect_t*) malloc(sizeof(rect_t));
	r->clazz = rectClass;
	r->baseObject = s;
	r->w = w;
	r->h = h;
	return r;
}

void printShape(shape_t * o) {
	printf("print shape: %d x %d\n", o->x, o->y);
}

int areaRect(rect_t * o) {
	printf("print rect: %d x %d\n", o->w, o->h);
	return (o->w * o->h);
}

void init() {
	shapeClass = malloc(sizeof(struct ShapeClass));
	rectClass = malloc(sizeof(struct RectangleClass));

	rectClass->area = areaRect;
	rectClass->baseClazz = shapeClass;

	shapeClass->print = printShape;
}

int main(void) {
	init();

	printf("init\n");

	shape_t* s =newShape(1,1);

	printf("shape\n");

	rect_t* r = newRect(1, 2, 3, 4);

	printf("rect: %d x %d\n", r->h, r->w);

	int area = r->clazz->area(r);
	printf("area = %d\n", area);
	r->clazz->baseClazz->print(r->baseObject);
}
