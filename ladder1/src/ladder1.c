/*
 ============================================================================
 Name        : ladder1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,a[100],flag=0,limit;
	printf("enter the limit");
	scanf("%d",&limit);
	printf("enter the values of the array");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit;i++)
	{
		flag=0;
		for(j=0;j<limit;j++)
		{
			if(i!=j)
			{
if(a[i]==a[j])
{
					flag++;
				}
			}




		}
		if(flag==0)
									{
									printf("%d",a[i]);
									}
	}

	return EXIT_SUCCESS;
}
