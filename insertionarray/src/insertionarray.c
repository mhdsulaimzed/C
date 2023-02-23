/*
 ============================================================================
 Name        : insertionarray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,a[100],value,pos,num;
	printf("enter a limit");
	scanf("%d",&limit);
	printf("enter values of the array");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);/* prints !!!Hello World!!! */
	}
	 printf("enter the value to be inserted");
	 scanf("%d",&value);
	 printf("enter the position where the value to be inserted");
	 scanf("%d",&pos);
	 for(i=limit-1;i>=pos-1;i--)
	 {
		 a[i+1]=a[i];
	 }

	 a[pos-1]=value;

	 printf("new array:");
	 for(i=0;i<=limit;i++)
	 {
		 printf("%d ",a[i]);
	 }
	return EXIT_SUCCESS;
}
