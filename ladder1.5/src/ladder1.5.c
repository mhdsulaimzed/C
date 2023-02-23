/*
 ============================================================================
 Name        : 5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,limit=3,m=2;
for(i=1;i<=limit;i++)
{

	for(j=1;j<=i*m;j++)
	{
		printf("*");/* prints !!!Hello World!!! */
		if(j%(i*2)==0)
			{
				printf("\n");
			}
	}

	m=m+2;

	for(k=1;k<=3;k++)
	{
		printf("*\n");
	}
}
	return EXIT_SUCCESS;
}
