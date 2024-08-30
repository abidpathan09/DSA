#include<stdio.h>

int big(int a[],int i)
{
	if(i==3)//base case.
	   return a[i];
	else
	   {
	   	int max=big(a,i+1);//recursive case.
	   	if(a[i]>max)
	   	  return a[i];
	   	else
	   	  return max;
	   }
	
}

int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the element of array: ");
	for (int i=0; i<n;i++)
	   scanf("%d",&arr[i]);
	   
	printf("\nbiggest element of array is: %d",big(arr,0));
	return 0;
}