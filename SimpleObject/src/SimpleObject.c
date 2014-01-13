/*
 * SimpleObject.c
 *
 *  Created on: 06.11.2013
 *  Author: TEAM S,W,G
 */

#include <stdio.h>
#include "shape.h"
#include "rectangle.h"
#include "square.h"

int main(int argc, char **argv) {
	printf("Rectangle\n");
	rectangleObject_t* rect = new_Rectangle(10, 15);
	draw(rect); // better rect.draw();
	area(rect);

	printf("\n\n");

	printf("Square\n");
	squareObject_t* square = new_Square(15);
	draw(square);
	area(square);
}
