/*
 ============================================================================
 Name        : TryCatchEx.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <setjmp.h>
#include <stdbool.h>

#define throw(EX) longjmp(gEnv,EX)
#define try int x=setjmp(gEnv);\
	if(0==x)
#define catch(EX) else if(x==EX)
#define globalcatch else

#define finally


typedef enum {
	EX_OK = 0, NotImplementedException = 10, AnotherNiceException = 20,GlobalException = 30
} ExceptionType;

ExceptionType gException = EX_OK;
jmp_buf gEnv;
bool gExSet = false;






int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	try
	{
		throw(GlobalException);
	}
	catch(NotImplementedException)
	{
		puts("Not Implement Ex");
	}
	catch(AnotherNiceException)
	{
		puts("AnotherNiceException");
	}
	globalcatch
	{
	  puts("Global");
	}
	finally
	{
		puts("finally");
	}






	return EXIT_SUCCESS;
}
