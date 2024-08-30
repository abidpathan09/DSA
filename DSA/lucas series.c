//recursive program to generate lucas series.
#include<stdio.h>
#include<stdlib.h>
int lucas(int n)
{
	if(n==0 )
	  return 2;
	else if(n==1)
      return 1;	    
	else
	   return lucas(n-1)+lucas(n-2);
}
int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	printf("\n**lucas series**\n");
	
	for (int i=0;i<n;i++)
	   printf("%d ",lucas(i));
	
	printf("\n");
	return 0;
}
