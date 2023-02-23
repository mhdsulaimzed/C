/*
 ============================================================================
 Name        : deletemultipleoffive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,a[10],k;
	printf("enter a limit");
	scanf("%d",&limit);
	printf("enter value for array");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);/* prints !!!Hello World!!! */
	}
	for(i=0;i<limit;i++)
	{
		if(a[i]%5==0)
		{
		    for(k=i;k<limit;k++)
		    {
			  a[i]=a[i+1];
		    }
		    limit--;
		     i--;
		}
	}
	for(i=0;i<limit;i++)
	{
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
