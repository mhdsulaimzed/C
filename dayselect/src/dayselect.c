/*
 ============================================================================
 Name        : dayselect.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	printf("1 for Monday\n2 for tuesday\n3 for wednesday\n4 for thursday\n5 for friday\n6 for saturday\n7 for sunday ");

	printf("\n enter a number");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("MONDAY");
		break;
	case 2:
		printf("TUESDAY");
		break;
	case 3:
		printf("wednesday");
		break;
	case 4:
		printf("thursday");
		break;
	case 5:
		printf("friday");
		break;
	case 6:
		printf("saturday");
		break;
	case 7:
		printf("sunday");
		break;
	default:
		printf("ivalid");
		/* prints !!!Hello World!!! */
	}
	return EXIT_SUCCESS;
}
