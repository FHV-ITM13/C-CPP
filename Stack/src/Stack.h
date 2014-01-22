/*
 * Stack.h
 *
 *  Created on: 16.01.2014
 *      Author: GIGI
 */

#ifndef STACK_H_
#define STACK_H_

struct angestellt {

	char *name;
	char *vorname;
	int gehalt;
	struct angestellt *next;
	struct angestellt *prev;

};

int stackinit(void);
int push(struct angestellt *neu);
void pop(void);
void myPrint(struct angestellt *data);

#endif /* STACK_H_ */
