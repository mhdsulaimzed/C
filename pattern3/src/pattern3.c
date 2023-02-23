/*
 ============================================================================
 Name        : pattern3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,l,w;
	printf("enter the length of rectange");
	scanf("%d",&l);
	printf("enter th width of the rectangle");
	scanf("%d",&w);
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=w;j++)
		{
			if(i==1||i==l||j==1||j==w)
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}
	printf("\n");
	}
	return EXIT_SUCCESS;
}
