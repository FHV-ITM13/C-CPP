/*
 ============================================================================
 Name        : MemoryAlignment.c
 Author      : Thomas Gaida
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


struct ang1{

	int s;
	int s1;
	char c;
}ang1;

struct ang2{

	int s;
	char c;
	int s1;
}ang2;

struct ang3{

	char c;
	int s;
	int s1;

}ang3;

// structure A
typedef struct structa_tag {
	char c;
	short int s;
} structa_t;

// structure B
typedef struct structb_tag {
	short int s;
	char c;
	int i;
} structb_t;

// structure C
typedef struct structc_tag {
	char c;
	double d;
	int s;
} structc_t;

// structure D
typedef struct structd_tag {
	double d;
	int s;
	char c;
} structd_t;

// structure E
typedef struct structe_tag {
	char c;
	short int d;
	char s;
} structe_t;

#pragma pack(push,1)
// structure F
typedef struct structf_tag {
	char c;
	short int d;
	char s;
} structf_t;
#pragma pack(pop)


typedef struct robot{

	   unsigned int Sensor1:1;
	   unsigned int Sensor2:1;
	   unsigned int Sensor3:1;
	   unsigned int Schalter:1;
	   unsigned int Ausgabe:4;

}Robot;


int main(void) {
	puts("What the sh"); /* prints What the sh */

	printf("Ang1: %d\n",sizeof(ang1));
	printf("Ang2: %d\n",sizeof(ang2));
	printf("Ang3: %d\n",sizeof(ang3));


	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(double) = %d\n", sizeof(double));
	printf("sizeof(short int ) = %d\n", sizeof(short int));
	printf("sizeof(char) = %d\n", sizeof(char));

	printf("sizeof(structa_t) = %d\n", sizeof(structa_t));
	printf("sizeof(structb_t) = %d\n", sizeof(structb_t));
	printf("sizeof(structc_t) = %d\n", sizeof(structc_t));
	printf("sizeof(structd_t) = %d\n", sizeof(structd_t));
	printf("sizeof(structe_t) = %d\n", sizeof(structe_t));

	printf("sizeof(structef_t) = %d\n", sizeof(structf_t));

	Robot robot;
	printf("sizeof(Robot) = %d\n", sizeof(robot));

	int i = 5;
	int *p = &i;

	printf("sizeof(int*) = %d\n", sizeof(p));

	double d  = 5.0;
	double *pD = &d;

	printf("sizeof(double*) = %d\n", sizeof(pD));

	char a = 'a';
	char *str ="a";
	printf("sizeof(''a'') = %d\n", sizeof("a")); //liefert 2
	printf("sizeof('a') = %d\n", sizeof('a')); //als int interpretiert
	printf("sizeof(char *str=''a'') = %d\n", sizeof(*str)); //liefert 1
	printf("sizeof(char a = 'a') = %d\n", sizeof(a)); // liefert 1
	return 0;

	return EXIT_SUCCESS;
}
