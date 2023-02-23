/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,limit=3,limit2=3;
	for(i=1;i<=limit;i++)
	{
		for(j=1;j<=limit2;j++)
		{
			for(k=1;k<=j;k++)
			{
				printf("*");
			}
			printf("\n");
		}
		limit2++;
	}

	return EXIT_SUCCESS;
}
