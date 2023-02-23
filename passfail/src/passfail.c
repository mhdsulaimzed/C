/*
 ============================================================================
 Name        : passfail.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	printf("enter your mark");
	scanf("%f",&mark);
	if(mark<=100&&mark>=50)
	{
		printf("PASSED");
	}
	else if(mark<50&&mark>=0)
	{
		printf("FAILED");

	}
	else{
		printf("invalid");
	}
	 /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
