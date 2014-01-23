/*
 ============================================================================
 Name        : Exceptions.c
 Author      : Michael Zangerle
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <stdbool.h>

#include "Exceptions.h"

jmp_buf gExceptionJmpBuf;
int gException = EX_OK;
bool gHandlerSet = false;

void ex_resetExceptionHandler() {
	gHandlerSet = false;
	gException = EX_OK;
}

inline ExceptionType ex_getActiveException() {
	return gException;
}

inline void ex_clearActiveException() {
	gException = EX_OK;
}

void ex_throwException(ExceptionType exception) {
	if (gHandlerSet)
		longjmp(gExceptionJmpBuf, exception);
	else {
		// some error handling here:
		// exception occured though no handler
		// is set!
	}
}

int main(void) {

	// set local exception handler
	EX_EXCEPTIONHANDLER_BEGIN {

		printf("Exception %d occurred!", ex_getActiveException());
		// return false when an exception occurs
	} EX_EXCEPTIONHANDLER_END(return false)

		// do something that makes sense,
		// but throws an exception

	ex_throwException(EX_SOMEEXCEPTION1);

	return EXIT_SUCCESS;
}
