/*
 ============================================================================
 Name        : numpattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,j;
	printf("enter the limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	printf("\n");}
	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
