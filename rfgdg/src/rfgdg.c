/*
 ============================================================================
 Name        : rfgdg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */



#include <stdio.h>
#include <stdlib.h>

int main(void) {
float amount,n;
printf("enter the amoumt");
scanf("%f",&amount);
if(amount>=250000&&amount<500000)
{
	n=(amount/100)*5;
			printf("%f",n);
}
else if(amount>=500000&&amount<1000000)
{
	n=(amount/100)*20;
			printf("%f",n);
}
else if(amount>=1000000&&amount<5000000)
{
	n=(amount/100)*30;
	printf("%f",n);
}
else if(amount<250000){
	printf("NO TAX");
}
return EXIT_SUCCESS;
}
