/*
 ============================================================================
 Name        : uniqueno.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,j,a[100],count;
	printf("enter a limit");
	scanf("%d",&limit);
	 printf("enetr values");
	 for(i=0;i<limit;i++)
	 {
		 scanf("%d",&a[i]);
	 }
	 for(i=0;i<limit;i++){
		 count=0;
		 for(j=0;j<limit;j++)
		 {
			 if(i!=j&&a[i]==a[j])
			 {
				 count++;
				 break;
			 }

		 }
		 if(count==0){
		 				 printf("%d",a[i]);
		 			 }

	 }
	/* prints !print!!Hello World!!! */
	return EXIT_SUCCESS;
}
