/*
 ============================================================================
 Name        : avgof.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,sum=0,a[100];
	float avg;
	printf("enter a limit");
	scanf("%d",&limit);
	printf("entr the elements of the array");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);/* prints !!!Hello World!!! */
	}
	for(i=0;i<limit;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/limit;
	printf("%f",avg);
	return EXIT_SUCCESS;
}
