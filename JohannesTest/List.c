/*
 * List.c
 *
 *  Created on: 19.01.2014
 *      Author: johannes
 */

#include <stdio.h>
#include <stdlib.h>
#include "List.h"


struct data {
	void* value;
	struct data* next;
	struct data* prev;
};

struct data* first = NULL;
struct data* last = NULL;
int initialized = 0;

void init() {
	struct data* tmp = malloc(sizeof(struct data));
	tmp->next = NULL;
	tmp->prev = NULL;
	tmp->value = NULL;

	first = tmp;
	last = tmp;
}

void push(void* value) {
	if (initialized == 0) {
		init();
		initialized = 1;
	}

	if (first->value == NULL) {
		first->value = value;
	} else {
		struct data* tmp = malloc(sizeof(struct data));
		tmp->value = value;
		tmp->next = first;

		first->prev = tmp;
		first = tmp;
	}
}

void* pop() {
	if (initialized == 0) {
		init();
		initialized = 1;
	}

	if (first->value != NULL) {
		if(last == first){
			initialized = 0;
		}

		void* value = first->value;

		struct data *tmp = first;
		first = first->next;
		free(tmp);

		return value;
	}
	return NULL;
}

void enqueue(void* value) {
	push(value);
}

void* dequeue() {
	if (initialized == 0) {
		init();
		initialized = 1;
	}

	if (last->value != NULL) {
		if (last == first) {
			initialized = 0;
		}

		void* value = last->value;

		struct data *tmp = last;
		last = last->prev;
		free(tmp);

		return value;
	}
	return NULL;
}
