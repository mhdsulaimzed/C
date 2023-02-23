/*
 ============================================================================
 Name        : 2darray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[3][3],i,j,sum=0;
	printf("enter numbers");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			/* prints !!!Hello World!!! */
		}

	}
	printf("entered numbers are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}

	}
	printf("%d",sum);
	return EXIT_SUCCESS;
}
