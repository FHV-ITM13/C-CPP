#include "MemoryManagement.h"

#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#define HEAP_ARR_SIZE (HEAP_SIZE / sizeof(block_header_t))


typedef struct {
	uint16_t 	crc;
	uint8_t		options; // 1 = belegt, 0 = free
	uint8_t		rfu; //reserved for future use
	uint16_t 	len;
} block_header_t;

//static == intern (private)
//methoden prototypen (signaturen)
static void 	defrag();
static uint16_t getFreeIndex();
static uint8_t 	hasEnoughSpace(uint16_t size);


static void* 	pLastHeapPos = NULL;
static void* 	pHeap[HEAP_SIZE];
static void* 	pArr[HEAP_ARR_SIZE] = { NULL };
static void* 	pEndOfHeap;
static uint8_t 	freeSpace;


uint16_t mem_alloc(uint16_t size) {
	if(pLastHeapPos == NULL) {
		pLastHeapPos = pHeap;
		freeSpace = HEAP_SIZE;
		pEndOfHeap = &pHeap[HEAP_SIZE -1];
	}

	//ueberpruefen, ob genuegend Speicher
	if(!hasEnoughSpace(size)) {
		defrag();
	}

	//erneut ueberpruefen, da defrag nicht gewaehrleistet,
	//dass danach genuegend Platz zur verfuegung steht
	if(!hasEnoughSpace(size)) {
		return NULL;
	}

	int freeIndex = getFreeIndex();

	//kein freier Index im Array
	if(freeIndex == -1) {
		return NULL;
	}

	//struktur wird im Speicher an der last heap pos angelegt
	block_header_t* pNewBlock = (block_header_t*) pLastHeapPos;
	pNewBlock->len = size;
	pNewBlock->options = 1; //belegt
	pNewBlock->crc = pNewBlock->len + pNewBlock->options;

	void* pDataStart = (uint8_t*) pLastHeapPos + sizeof(block_header_t);

	//setzen der naechsten freien heap pos
	pLastHeapPos = (uint8_t*)pDataStart + pNewBlock->len;

	//speichern des pointers auf das datensegment im array
	pArr[freeIndex] = pDataStart;

	return freeIndex;
}

void free_mem(uint8_t index) {
	if(index < 0 || index >= HEAP_ARR_SIZE) {
		return;
	}

	void* pDataStart = pArr[index];
	block_header_t* pHeader = (block_header_t*)((uint8_t*)pDataStart - sizeof(block_header_t));

	//loesche daten
	pHeader->options=0; //free

	freeSpace += pHeader->len + sizeof(block_header_t);
}

void* get_data_pointer(uint16_t index) {
	if(index < 0 || index >= HEAP_ARR_SIZE) {
		return NULL;
	}

	return pArr[index];
}

void defrag() {
	//TODO reset index and so on
}

uint16_t getFreeIndex() {
	uint16_t i;

	for(i = 0; i < HEAP_ARR_SIZE; i++) {
		if(pArr[i] == NULL) {
			return i;
		}
	}

	return -1;
}

uint8_t hasEnoughSpace(uint16_t size) {
	if(freeSpace - size >= 0) {
		if(((uint8_t*) pLastHeapPos + sizeof(block_header_t) + size) <= pEndOfHeap ) {
			return 1;
		}
	}

	return 0;
}


int main(int argc, char *argv[] ) {

	printf("Welcome to the great epic memory management unit!\n\n");

	printf("Init first memory - wish us luck :D");

	void* p = mem_alloc(10);

	printf("\nSee you!");

	return 0;
}
