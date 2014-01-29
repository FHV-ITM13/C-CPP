/*
 ============================================================================
 Name        : ExceptionHandling.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

typedef enum {
	false, true
} bool;

typedef enum {
	EX_OK = 0, NotImplementedException = 1, AnotherNiceException = 2
} ExceptionType;

ExceptionType gException = EX_OK;
jmp_buf gEnv;
bool gExSet = false;

void ex_resetExceptionHandler() {
	gExSet = false;
	gException = EX_OK;
}

#define EXCEPTION_HANDLER_START if (!gExSet) {\
									gExSet = true;\
									gException = setjmp(gEnv);\
									if (gException != EX_OK) {
#define EXEPTION_HANDLER_END		} \
									ex_resetExceptionHandler();\
								}\


void foo() {
	//normally some checks here...
	gException = NotImplementedException;
	longjmp(gEnv, gException);
}

void handleException() {
	switch(gException) {
	case EX_OK:
		printf("no exception occurred!\n");
		break;
	case NotImplementedException:
		printf("NotImplementedException\n");
		break;
	case AnotherNiceException:
		printf("AnotherNiceException\n");
		break;
	}
}

int main(void) {
	printf("Call mighty function!\n");

	if(0 == setjmp(gEnv)) {
		foo();
	} else {
		handleException();
	}
	return EXIT_SUCCESS;
}


