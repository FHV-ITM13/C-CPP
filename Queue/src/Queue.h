/*
 * Queue.h
 *
 *  Created on: 18.01.2014
 *      Author: GIGI
 */

#ifndef QUEUE_H_
#define QUEUE_H_

struct reservierung{

	char *name;
	struct reservierung *previous;

};

typedef struct reservierung Reservierung;

void schlange_init(void);
void put(Reservierung *neu);
void get(void);

#endif /* QUEUE_H_ */
