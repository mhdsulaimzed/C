/*
 ============================================================================
 Name        : pattern8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,n;
	puts("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");/* prints !!!Hello World!!! */
		}
		for(k=1;k<=(2*i)-1;k++)
		{

printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
