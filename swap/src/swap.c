/*
 ============================================================================
 Name        : swap.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


	int main(void) {
		int limit,i,a[100],b[100],temp;
		printf("enter the limit");
		scanf("%d",&limit);
		printf("enter the first array");
		for(i=0;i<limit;i++)
		{
			scanf("%d",&a[i]);

		}
		printf("enter the second array");
		for(i=0;i<limit;i++)
		{
			scanf("%d",&b[i]);
		}
		for(i=0;i<limit;i++)
		{

		temp=a[i];
		a[i]=b[i];
		b[i]=temp;}
		printf(" first array:");
		for(i=0;i<limit;i++)
		{
			printf("%d \t",a[i]);
		}
		printf("\n second array:");
		for(i=0;i<limit;i++)
		{
			printf("%d\t",b[i]);
		}/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
