//smallest element from array.
#include<stdio.h>
#include<stdlib.h>

int biggest(int arr[], int i) {
    if (i == 0) {
        return arr[0];  // Base case.
    } else {
        int max_in_rest = biggest(arr, i - 1);  // Recursive call
        if (arr[i] > max_in_rest) {
            return arr[i];
        } else {
            return max_in_rest;
        }
    }
}
int main()
{
	int n;
	printf("Enter the size of an array: ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the element of array: ");
	for (int i=0;i<n;i++)
	   scanf("%d",&arr[i]);
	
	printf("The biggest element of entered array is: %d",biggest(arr,--n));
	printf("\n");
	return 0;
}