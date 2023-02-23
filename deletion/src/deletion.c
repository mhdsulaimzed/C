/*
 ============================================================================
 Name        : deletion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ===========================]=================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int del,pos,i,a[5];
	printf("enter the values of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position to be deleted");
	scanf("%d",&pos);


	for(i=pos-1;i<5;i++)
	{
		a[i]=a[i+1];

	}
printf("new valuess are:");
for(i=0;i<5-1;i++)
{
	printf("%d",a[i]);
}
	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
