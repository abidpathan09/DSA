// **reverse of entere string.
#include<stdio.h>
void reverse(char str[])
{
   int i=0;
   while(str[i]!='\0')
   {			   	   
	   i++;
   }
   i--;
   for(i;i>-1;i--)
      printf("%c",str[i]);
  	
}

int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	char str[n];
	printf("Enter the string: ");
	scanf("%s",&str);
	
	reverse(str);
		
	return 0;	
}