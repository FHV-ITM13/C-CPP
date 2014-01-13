/*
 * shape.c
 *
 *  Created on: 06.11.2013
 *  Author: TEAM S,W,G
 */

#include "shape.h"

shapeClazz_t shapeClazz = {
		drawGeneric
};

void drawGeneric(shapeObject_t *s)
{
	printf("ich bin ein generic  mit %d\n", s->type);
}
