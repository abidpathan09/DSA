//***check the enter string is palindrome or not.
#include<stdio.h>
int palindrome(char str[])
{
	int start=0, end=0;
	while(str[end]!=0)
        end++;
    
	end--;//because end(or last) index contain null character.
	while(start<end)
	{
		if(str[start]!=str[end])
		   return 0;//not a palindrome.
		start++;
		end--;
	}
	return 1;//Palindrome.	
}

int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	char str[n];
	printf("Enter the string :");
	scanf("%s",&str);
	
	if(palindrome(str))
	  printf("The string is palindrome.\n");
	else
	  printf("The string is not palindrome.\n");
	  
	return 0;
}