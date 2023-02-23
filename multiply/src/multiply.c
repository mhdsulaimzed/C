/*
 ============================================================================
 Name        : multiply.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,i,mul;
	printf("enter a number to get its mulple table");
	scanf("%d",&number);
	for(i=0;i<=10;i++)
	{
		mul=number*i;
				printf("%d*%d=%d\n",number,i,mul);

	}
	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
