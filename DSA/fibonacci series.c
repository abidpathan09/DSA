//recursive program to generate fibonacci series.
#include<stdio.h>
#include<stdlib.h>
int fibonacci(int n)
{
	if(n==0 || n==1 )
	   return 1;
	    
	else
	   return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	printf("\n**fibonacci series**\n");
	
	for (int i=0;i<n;i++)
	   printf("%d ",fibonacci(i));
	
	printf("\n");
	return 0;
}
