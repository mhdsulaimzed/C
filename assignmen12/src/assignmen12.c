/*
 ============================================================================
 Name        : assignmen12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,a[100],i,j,temp;
	printf("enter the limit");
	scanf("%d",&limit);
	printf("enter the numbers");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<=limit-1;i++)
{
	for(j=i+1;j<limit;j++)
	{
		if(a[i]<a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
}
printf("the desendend oder of the numbers are:");
for(i=0;i<limit;i++)
{
	printf(" %d \t",a[i]);
}
	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
