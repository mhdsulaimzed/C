/*
 ============================================================================
 Name        : simpleintrest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float P,R,N,S;

	printf("enter the principal amount loan taken");
	scanf("%f",&P);
	printf("enter the rate of intrest");
	scanf("%f",&R);
	printf("enter the no of year the loan taken for");
	scanf("%f",&N);
	S=(P*R*N)/100;
	printf("simple intrest: %f",S);
	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
