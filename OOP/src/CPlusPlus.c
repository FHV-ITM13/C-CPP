#include <stdio.h>

typedef struct ShapeObj shapeObj_t;

typedef struct {
	void* base;

	shapeObj_t* (*ctor)();
	void (*draw)(shapeObj_t* );
} shapeClass_t;

static shapeObj_t* init_shape() {
	printf("shape init\n");
	shapeObj_t* shape = malloc(sizeof(shapeObj_t));

	return shape;
}

static void draw_shape(shapeClass_t *shap) {
	printf("draw shape\n");
}

shapeClass_t shapeClass = { NULL, &init_shape, &draw_shape };

typedef struct RectangleObj rectangleObj_t;

typedef struct {
	shapeClass_t* base;

	rectangleObj_t* (*ctor)(int, int);
	void (*draw)(rectangleObj_t*);
	void (*calc_area)(rectangleObj_t*);
} rectangleClass_t;

typedef struct RectangleObj {
	shapeObj_t* baseObj;
	rectangleClass_t* class;

	int x;
	int y;
} rectangleObj_t;

static int init_rectangle(int x, int y) {

	rectangleObj_t* rect = malloc(sizeof(rectangleObj_t));

	rect-> = &shapeClass;
	rect->baseObj = &shape
	rect->x = x;
	rect->y = y;
	return 0;
}


static void draw_rectangle(rectangleObj_t *rect) {
	printf("draw rectangle\n");
	rect->class->draw();
}

static void calcArea_rectangle(rectangleObj_t *rect) {
	printf("x: %d, y: %d\n", rect->x, rect->y);
	printf("Area: %d\n", rect->x*rect->y);
}

rectangleClass_t rectangleClass = { shapeClass, &init_rectangle, &draw_rectangle, &calcArea_rectangle };
