/*
 * PointerQueue.h
 *
 *  Created on: 18.01.2014
 *      Author: Stefan
 */

#ifndef POINTERQUEUE_H_
#define POINTERQUEUE_H_


template<typename T, int size>
typedef struct {
	T data;
} Data;

template<typename T, int size>
class PointerQueue {
public:
	PointerQueue() {

	}

private:
	Data *front;
	Data *back;
	int count;
};


#endif /* POINTERQUEUE_H_ */
