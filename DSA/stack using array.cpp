#include<stdio.h>
#include<stdlib.h>
#define max 100

int stack[max],top=-1;

int IsEmpty()
{
	if(top==-1)
		return 1;
	else
	    return 0;
}

void push(int item)
{
	if(top==max-1)
	{
		printf("stack overflow\n");
		return;
	}
	top++;
	stack[top]=item;
}

int pop()
{
	int data;
	if(top==-1)
	{
	    printf("stack underflow\n");
	    return -1;
	}
	data=stack[top];
	top--;
	return data;
}

void view()
{
	if(IsEmpty())
	{
		printf("stack is empty\n");
		return;		
	}
	
	int i=top;
	for(i;i>=0;i--)
	  printf("%d ",stack[i]);
	printf("\n");
}

int main()
{
	int ch,n;
	while(1)
	{
		printf("\nEnter 1 for push, 2 for pop, 3 for show, other for exit: ");
		scanf("%d",&ch);
		
		if(ch==1)
		{
			printf("Enter number for push: ");
			scanf("%d",&n);
			push(n);
		}
		else if(ch==2)
		{
			int s=pop();
			if(s!=-1)
			   printf("%d\n",s);
	    }  
		else if(ch==3)
		  view();
		else
		  exit(0);
	}
	return 0;
}