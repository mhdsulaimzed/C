/*
 ============================================================================
 Name        : assignment11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,a[100],num=0;
	printf("enter the limit");
	scanf("%d",&limit);
	printf("enter the numbers");
	for(i=0;i<limit;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<limit;i++)
	{
		if(a[i]%2==0)
		{
			num=num+1;
			}
	}
	printf("there are %d even numbers",num);
	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
