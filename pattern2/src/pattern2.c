/*
 ============================================================================
 Name        : pattern2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,w,i,j;
	printf("enter the length of the rectangle");
	scanf("%d",&l);/* prints !!!Hello World!!! */
	printf("enter the width of the rectangle");
	scanf("%d,",&w);
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=w;j++)
		{
			printf("*");

		}
	printf("\n");}
	return EXIT_SUCCESS;
}
