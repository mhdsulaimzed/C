/*
 ============================================================================
 Name        : addfloat.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float number1,number2,sum;
	printf("enter two numbers that is tobe added");
	printf(" \n enter first number");
	scanf("%f",&number1);
	printf("enter the second number");
	scanf("%f",&number2);
	sum=number1+number2;
	printf("sum is%f",sum);
	 /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
