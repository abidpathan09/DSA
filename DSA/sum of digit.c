//recursive program to generate sum of digit.
#include<stdio.h>
#include<stdlib.h>

int sum_digit(int n)
{
	if(n==0)
	   return 0;
	else
	   return n%10+sum_digit(n/10);
	   
}

int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	printf("**sum of digit**\n");
	
	printf("%d",sum_digit(n));
	printf("\n");
	return 0;
}