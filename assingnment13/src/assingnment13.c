/*
 ============================================================================
 Name        : assingnment13.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char word[20];
	int c,i,flag=0;
	printf("enter a string");
	scanf("%s",word);
	c=strlen(word);
	for(i=0;i<c;i++)
	{
		if(word[i]!=word[c-i-1])
		{
			flag=1;
			break;/* prints !!!Hello World!!! */
		}
	}
	if(flag)
	{
		printf("entered string is not a palindrome");
	}
	else{
		printf("entered string is a palindrome");
	}
	return EXIT_SUCCESS;
}
