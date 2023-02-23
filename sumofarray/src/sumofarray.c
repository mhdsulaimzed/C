/*
 ============================================================================
 Name        : sumofarray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],i,limit,sum=0;

	printf("enter the limit");
	scanf("%d",&limit);
	printf("enter the number");
	for(i=0;i<limit;i++)
	{scanf("%d",&a[i]);
		/* prints !!!Hello World!!! */
	}
	for(i=0;i<limit;i++)
	{
		sum=a[i]+sum;
	}
	printf("%d",sum);

	return EXIT_SUCCESS;
}
