/*
 * main.c
 *
 *  Created on: 22.01.2014
 *      Author: johannes
 */

#define TRUE 1
#define FALSE 0
#define NULL (void*) 0

typedef int bool;
typedef char byte;

// forward declaration
typedef struct is1 is_o;
typedef struct bais1 bais_o;
typedef struct fis1 fis_o;
typedef struct ucis1 ucis_o;

typedef struct is {
	bool (*hasNext)(is_o * o);
	byte (*next)(is_o * o);
	void (*delete)(is_o * o);
} is_t;

typedef struct bais {
	is_t * baseClazz;
	bool (*hasNext)(bais_o * o);
	byte (*next)(bais_o * o);
	void (*delete)(bais_o * o);
} bais_t;

typedef struct fis {
	is_t * baseClazz;
	bool (*hasNext)(fis_o * o);
	byte (*next)(fis_o * o);
	void (*delete)(fis_o * o);
} fis_t;

typedef struct ucis {
	fis_t * baseClazz;
	bool (*hasNext)(ucis_o * o);
	byte (*next)(ucis_o * o);
	void (*delete)(is_o * o);
} ucis_t;

typedef struct is1 {
	is_t * clazz;
	fis_o * subF;
	bais_o * subU;
} is_o;

typedef struct bais1 {
	bais_t * clazz;
	is_o * baseObj;

	byte data[9];
	int i;
} bais_o;

typedef struct fis1 {
	fis_t * clazz;
	is_o * baseObj;

	// evtl im test is_t
	is_o * delegate;
} fis_o;

typedef struct ucis1 {
	ucis_t * clazz;
	fis_o * baseObj;
} ucis_o;

bool IS_hasNext(is_o * o) {
	if (o->subF != NULL) {
		return o->subF->clazz->hasNext(o->subF);
	} else {
		return o->subU->clazz->hasNext(o->subU);
	}
}

byte IS_next(is_o * o) {
	if (o->subF != NULL) {
		return o->subF->clazz->next(o->subF);
	} else {
		return o->subU->clazz->next(o->subU);
	}
}

void IS_delete(is_o * o) {
}

bool FIS_hasNext(fis_o * o) {
	return o->delegate->clazz->hasNext(o->delegate);
}

byte FIS_next(fis_o * o) {
	return o->delegate->clazz->next(o->delegate);
}

void FIS_delete(fis_o * o) {
	o->baseObj->clazz->delete(o->baseObj);
}

bool UCIS_hasNext(ucis_o * o) {
	return o->baseObj->clazz->hasNext(o->baseObj);
}

byte xX(byte x){
	if (x >= 'a' && x <= 'z') {
		return x + ('A' - 'a');
	}
	return x;
}

byte UCIS_next(ucis_o * o) {
	byte x = o->baseObj->clazz->next(o->baseObj);
	// upper case
	return xX(x);
}

void UCIS_delete(ucis_o * o) {
	o->baseObj->clazz->delete(o->baseObj);
}

bool BAIS_hasNext(bais_o * o) {
	if (o->i <= sizeof(o->data) / sizeof(o->data[0])) {
		return TRUE;
	} else {
		return FALSE;
	}
}

byte BAIS_next(bais_o * o) {
	return o->data[o->i++];
}

void BAIS_delete(bais_o * o) {
	o->baseObj->clazz->delete(o->baseObj);
}

is_t is_class = { &IS_hasNext, &IS_next, &IS_delete };
bais_t bais_class = { &is_class, &BAIS_hasNext, &BAIS_next, &BAIS_delete };
fis_t fis_class = { &is_class, &FIS_hasNext, &FIS_next, &FIS_delete };
ucis_t ucis_class = { &ucis_class, &UCIS_hasNext, &UCIS_next, &UCIS_delete };

// forward declaration
extern bais_o bais1;
extern fis_o fis1;

is_o is1 = { &is_class, NULL, &bais1 };
bais_o bais1 = { &bais_class, &is1, "qwertz123", 0 };

is_o is2 = { &is_class, &fis1, NULL };
fis_o fis1 = { &fis_class, &is2, &is1 };
ucis_o ucis1 = { &ucis_class, &fis1 };

int main(void) {
	do {
		byte x = ucis1.clazz->next(&ucis1);
		printf("%s", &x);
	} while (ucis1.clazz->hasNext(&ucis1) != FALSE);
}
