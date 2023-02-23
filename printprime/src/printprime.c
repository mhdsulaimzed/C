/*
 ============================================================================
 Name        : printprime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,a[100],i,j,flag;
	printf("enter a limit");
	scanf("%d",&limit);
	printf("enter the values of the array");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);/* prints !!!Hello World!!! */
	}
	for(i=0;i<limit;i++)
	{
		flag=0;


		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				flag=1;

			}


		}
		if(flag==0 && a[i]!=1)
		{
			printf("%d",a[i]);
		}

	}
	return EXIT_SUCCESS;
}
