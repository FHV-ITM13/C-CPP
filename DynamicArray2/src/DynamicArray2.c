/*
 ============================================================================
 Name        : DynamicArray2.c
 Author      : Thomas Gaida
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("What the sh"); /* prints What the sh */

	int *value,*tmp;
		int i=0,more;
		int size,merker=0;

		printf("Anzahl der Werte\n ");
		scanf("%d",&size);
		value=(int *)calloc(size,sizeof(int));
		if(value==NULL)
		{
			printf("Kein Speicher mehr vorhanden\n");
			return EXIT_FAILURE;
		}
		else
		{

			do {
				while(merker<size)
				{
					printf("Wert für value[%d] eingeben:\n",merker);
					scanf("%d",&value[merker]);
					merker++;

				}

				printf("Neune Speicher reservieren(0=Ende)\n");
				scanf("%d",&more);

				if(more!=0)
				{
					size+=more;
					value=realloc(value,size*sizeof(int));
					if(value==NULL)
					{
						printf("Kein Speicher mehr vorhanden\n");
						return EXIT_FAILURE;
					}

				}
			}
			while(more!=0);


			printf("Ihre Werte\n");


			for(i=0;i<size;i++)
			{
				printf("value[%d]==%d\n",i,value[i]);
			}

		}



	return EXIT_SUCCESS;
}
