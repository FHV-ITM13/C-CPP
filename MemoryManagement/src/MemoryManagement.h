/*
 * MemoryManagement.h
 *
 *  Created on: 16.10.2013
 *      Author: Stefan
 */

#ifndef MEMORYMANAGEMENT_H_
#define MEMORYMANAGEMENT_H_

//kann von aussen mit arg gesetzt werden
#ifndef HEAP_SIZE
#define HEAP_SIZE  	1024
#endif

#include <inttypes.h>

uint16_t	mem_alloc(uint16_t size);
void 		free_mem(uint16_t index);
void*		get_data_pointer(uint16_t index);

#endif /* MEMORYMANAGEMENT_H_ */
