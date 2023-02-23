/*
 ============================================================================
 Name        : markgrade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int mark;
	printf("enter your mark");
	scanf("%d",&mark);
	if(mark>=90&&mark<=100)
	{
		printf("THE PROGRAM");
		/* prints !!!Hello World!!! */
	}
	else if(mark<90&&mark>=80)
	{
		printf("B");
	}
	else if(mark<80&&mark>=70)
	{
		printf("c");
	}
	else if(mark<70&&mark>=60)
	{
		printf("D");
	}
	else if(mark<60&&mark>=50)
	{
		printf("E");
	}
	else if(mark<50&&mark>=0)
	{
		printf("FAILED");

	}
	else {
		printf("INVALID");
	}
	return EXIT_SUCCESS;
}
