/*
 ============================================================================
 Name        : pattern9.c
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
	printf("enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");/* prints !!!Hfello World!!! */
		}
		printf("%d",j);
		for(k=1;k<=2*n-i-j+1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
