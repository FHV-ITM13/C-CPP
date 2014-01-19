/*
 * List.h
 *
 *  Created on: 19.01.2014
 *      Author: johannes
 */

#ifndef LIST_H_
#define LIST_H_

int initialized;

void push(void* value);
void* pop();
void enqueue(void* value);
void* dequeue();

#endif /* LIST_H_ */
