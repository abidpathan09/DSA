#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *prev,*next;
	
}Node;

Node *head =NULL, *tail=NULL;
void insert()
{
	int item;
	Node *temp;
	temp=(Node*)malloc(sizeof(Node));
	printf("Enter element to insert: ");
	scanf("%d",&item);
	
	temp->data=item;
	temp->next=NULL;
	temp->prev=NULL;
	
	if(head== NULL && tail== NULL)
		head=temp;
    else 
    {
    	temp->prev=tail;
    	tail->next=temp;
    }
    tail=temp;
    
    return;
}

void view()
{
	if(head == NULL &&tail== NULL)
	{
		printf("\nlist underflow\n");
		return;
	}
	
	else
	{
		printf("\n");
		Node *trav=head;
	    while(trav != NULL)
	    {
		   printf("%d ",trav->data);
		   trav=trav->next;
	    }
	}
	return;
}

void deletend()
{
	if(head == NULL &&tail== NULL)
	{
		printf("\nlist underflow\n");
		return;
	}

	else
	{
		Node*tmp;
		tmp=tail;
		if(head==tail)
		{ 
		  tail=NULL;
		  head=NULL;
		}
		else
		{
		  tail=tail->prev;
		  tail->next=NULL;
		  printf("\nAfter delete last element %d\n",tmp->data);
		}
		free(tmp);
		return;				
	}
	
}
void delet_all_instance()
{
	int value;
	printf("\nEnter element which you want to delete all instance :");
	scanf("%d",&value);
	
	Node *trvs=head;
	while(trvs != NULL)
	{
		if(trvs->data==value)
		{
			Node *tmp;
			tmp=trvs;
			trvs->prev->next=trvs->next;
			trvs->next->prev=trvs->prev;
			
		}
		trvs=trvs->next;
	}
	return;
}

int main()
{
	int n;
	
	while(1)
	{
		printf("\n 1.for insert node");
		printf("\n 2.for view");
		printf("\n 3.for delete end");
		printf("\n 4.for delete all the instances");
		printf("\nEnter your choice:");
		scanf("%d",&n);
		
	   if(n==1) insert();
	   else if(n==2) view();
	   else if (n==3) deletend();
	   else if (n==4) delet_all_instance();
	   else exit(9);
		
	}
	return 0;
}
