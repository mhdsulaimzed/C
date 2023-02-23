/*
 ============================================================================
 Name        : sumof2d.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100][100],b[100][100],c[100][100],limit,i,j;
	printf("enter a limit");
	scanf("%d",&limit);
	printf("enter the values of the first array");
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the values of second array");
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++)
		{
			scanf("%d",&b[i][j]);


		}
	}
	for(i=0;i<limit;i++)

	{
		for(j=0;j<limit;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("the sum two array are:\n");
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++)
		{
			printf("%d\t",c[i][j]);
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
