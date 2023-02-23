/*
 ============================================================================
 Name        : xprint.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, limit = 5;
	for (i = 0; i < limit; i++) {
		for (j = 0; j < limit; j++) {
			if (i == j) {
				printf("*");
			} else {
				printf("\n");
			}
		}

		printf("\n");

	}
	return EXIT_SUCCESS;
}
