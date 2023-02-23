/*
 ============================================================================
 Name        : searchkey.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,a[100],i,searchkey,flag=0;
	printf("enter a limit");
	scanf("%d",&limit);
	printf("enter the numbers");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to be searched");
	scanf("%d",&searchkey);
	for(i=0;i<limit;i++)
	{
		if(searchkey==a[i])
		{
			printf("item found in %d th position",i+1);
			flag=1;
			break;
		}



	}
	if(flag!=1)
	{
		printf("item not matched");
	}

	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
