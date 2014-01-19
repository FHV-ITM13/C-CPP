/*
 * Stack
 *
 *  Created on: 19.01.2014
 *      Author: johannes
 */

#include <stdio.h>
#include <stdlib.h>

struct data {
	void* value;
	struct data* next ;
	struct data* prev;
};

struct data* first = NULL;

void push(void* value) {
	if (first->value == NULL) {
		first->value = value;
	} else {
		struct data tmp;
		tmp.value = value;
		tmp.next = first;
		first->prev = &tmp;
		first = &tmp;
	}
}

void* pop() {
	if (first->value != NULL) {
		void* value = first->value;
		first = first->next;
		return value;
	}
	return NULL;
}

int main(void) {
	int i = 1;
	push(&i);

	int* x = pop();
	printf("%d", *x);
}
