/*
 ============================================================================
 Name        : char1array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a[100];
	int i,limit;
	printf("enter a limit");
	scanf("%d",&limit);
	for(i=0;i<=limit;i++)
	{
		scanf("%c",&a[i]);
	}
	printf("entered character is");
	for(i=0;i<=limit;i++)
	{
		printf("%c",a[i]);
	}
	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
