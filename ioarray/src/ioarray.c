/*
 ============================================================================
 Name        : ioarray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],i,limit;
	printf("enter a limit");
	scanf("%d",&limit);
	printf("enter %d elements",limit);
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);/* prints !!!Hello World!!! */
	}
	for(i=0;i<limit;i++)
	{
		printf("%d \t",a[i]);
	}

	return EXIT_SUCCESS;
}
