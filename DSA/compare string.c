//**compare the two string are equal or not.
#include<stdio.h>
int compare(char str1[],char str2[])
{
	
	int i=0;
	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		   return 0;//string not equal.
		i++;
	}
	//check the length of string are same or not.
	if(str1[i]=='\0' && str2[i]=='\0')
	    return 1;
	else 
	    return 0;
	
}

int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	char str1[n], str2[n];
	printf("Enter string1: ");
	scanf("%s",&str1);
	
	printf("Enter string2: ");
	scanf("%s",&str2);
	
	if(compare(str1,str2))
	   printf("The enter string is equal.\n");
	else
	   printf("The enter string is not equal.\n");
	
	return 0;
}