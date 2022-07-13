#include<stdio.h>
#include<stdlib.h>


typedef struct list
{
	int num;
	struct list *next;
}list;

list *creat_new_node()
{
	list *new=(list *)malloc(sizeof(list));
	printf("Enter a number to creat a node : ");
	scanf("%d",&new->num);
	new->next=NULL;
	return new;
}

		
void travesl(list *temp)
{
	while(temp)
	{
		printf(" %d",temp->num);
		temp=temp->next;
	}
	printf("\n");
}

void Delete_last_node(list **head)
{
	list *temp=*head;
	list *x=temp->next;
	while(x->next!=NULL)
	{
		if(temp)
		{
			temp=temp->next;
			x= x->next;
		}
	}
	temp->next=NULL;
	free(x);
}
int main()
{
	list *head=NULL,*new=NULL,*last=NULL;
	char ch='y';
	while(ch!='n')
	{
		new=creat_new_node();
		if(head == NULL)
		{
			head=new;
		}
		else
			last->next=new;
		last=new;
		printf("Do you want to add new node (y or n) : ");
		scanf("\n%c",&ch);
	}
	printf("\n...............Print the List....................\n");
	travesl(head);

	printf("\n...........Deleting last node in linked list..............\n");
	Delete_last_node(&head);

	printf("\n..............Print the List....................\n");
	travesl(head);
	
	return 0;
}


