/*
 ============================================================================
 Name        : piramid.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int i,j,k,limit=6;
for(i=1;i<=limit;i++)
{
	for(j=limit-i;j>=1;j--)
	{
		printf("  ");/* prints !!!Hello World!!! */
	}
	for(k=1;k<=i;k++)
	{
		printf(" %d ",k);
	}

printf("\n");
}
	return EXIT_SUCCESS;
}
