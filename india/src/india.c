/*
 ============================================================================
 Name        : india.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	char a[]={'MALAYALAM'};
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",a[j]);/* prints !!!Hello World!!! */
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
