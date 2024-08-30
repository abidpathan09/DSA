//Recurssive program to check the given number is prime or not.
#include<stdio.h>
#include<stdlib.h>

int prime_helper(int n,int i)
{
	//base case.
	if (n<=1)  return 0;
	if(n==2) return 1;
	if(n%i==0) return 0;
	if(i*i>n) return 1;
	
	//recursion case.	 
	return prime_helper(n,i+1);
	
}
int prime(int n)
{
	return prime_helper(n,2);
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	
	if (prime(n))
		printf("\n%d is Prime number.",n);
	else
	    printf("\n%d is Not Prime number.",n);
	printf("\n");
	return 0;
}