//recursive program to generate Tribonacci series.
#include<stdio.h>
#include<stdlib.h>
int Tribonacci(int n)
{
	if(n==0 || n==1 || n==2)
	   return 1;
	    
	else
	   return Tribonacci(n-1)+Tribonacci(n-2)+Tribonacci(n-3);
}
int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	printf("\n**Tribonacci series**\n");
	
	for (int i=0;i<n;i++)
	   printf("%d ",Tribonacci(i));
	
	printf("\n");
	return 0;
}
