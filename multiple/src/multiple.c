/*
 ============================================================================
 Name        : multiple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,value,c;
	printf("ENTER A NUMBER");
	scanf("%d",&value);
	for(i=0;i<=10;i++)
	{
		c=i*value;
		printf("%d*%d=%d \n",value,i,c);
	}


	return EXIT_SUCCESS;
}
