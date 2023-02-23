/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit=5,i,j,k;
	for(i=1;i<=limit;i++)
	{
		if(i%2==1)
		{
			for(j=1;j<=5;j++)
			{
				printf("*");
			}
		}
		else
		{
			for(j=1;j<=3;j++)
			{
				printf("*");
			}
		}
		printf("\n");
		if(i==5){
			break;
		}
		for(k=1;k<=2;k++)
		{
			printf("*\n");
		}
	}

	return EXIT_SUCCESS;
}
