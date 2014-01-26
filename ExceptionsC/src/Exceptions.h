/*
 * Exceptions.h
 *
 *  Created on: 23.01.2014
 *      Author: mike
 */

#ifndef EXCEPTIONS_H_
#define EXCEPTIONS_H_

#include <stdbool.h>

typedef enum {
	EX_OK = 0, EX_SOMEEXCEPTION1 = 10
} ExceptionType;

#define EX_EXCEPTIONHANDLER_BEGIN \
	if (!gHandlerSet) {\
		gHandlerSet = true;\
		gException = setjmp(gExceptionJmpBuf);\
	if (gException != EX_OK) {

#define EX_EXCEPTIONHANDLER_END(final) \
		ex_resetExceptionHandler();\
		final;\
		}\
	}

#endif /* EXCEPTIONS_H_ */
