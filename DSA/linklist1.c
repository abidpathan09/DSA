#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int item;
	struct node *next;
}nod;

//check the list is empty or not.
int is_empty(nod *n)
	{
	  return n== NULL;
    }
//insert new node.
void insert(nod **start,int value)
{
	nod *new_node= (nod *) malloc(sizeof(nod));
	new_node->item=value;
	new_node->next=NULL;

	if(is_empty(*start))
	  *start=new_node;
	else
	{
		nod *temp=*start;
		while(temp->next!=NULL)
		 temp=temp->next;
		temp->next=new_node;
	}  
}
//print elements of nodes.
void print(struct node *n)
{
	while(n!=NULL)
	 {
	 	printf("%d ",n->item);
	 	n=n->next;
	 }
	 printf("\n");
}
//main function.
int main()
{
	nod *start=NULL;
	
	//insert the values.
	insert(&start,10);
	insert(&start,20);
	insert(&start,30);
	
	printf("The elements of list are: ");
	//print the element of list.
	print(start);
	return 0;
}