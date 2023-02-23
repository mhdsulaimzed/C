/*
 ============================================================================
 Name        : areaofcircle.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float c=3.14,area,radius,peri;
	printf("enter the radius of the circle");
	scanf("%f",&radius);
	area=c*(radius*radius);
	peri=2*c*radius;

	printf("area=%f \n cercumfearence=%f",area,peri);
	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
