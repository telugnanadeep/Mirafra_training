#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
	int num;
	struct list *next;
}list;


list *creat_new_node()
{
	list *new= (list *)malloc(sizeof(list));
	printf("Enter number to insert into list : ");
	scanf("%d",&new->num);
	new->next=NULL;
	return new;
}

void travsel(list *temp)
{
	while(temp)
	{
		printf(" %d",temp->num);
		temp=temp->next;
	}
	printf("\n");
}

void reverse_list(list **head)
{
	list *p=NULL,*q=NULL,*r=NULL;
	q=r=*head;
	while(r!=NULL)
	{
		r=r->next;
		q->next=p;
		p=q;
		q=r;
	}
	*head=p;
}





int main()
{
	list *head=NULL,*new=NULL,*last=NULL;
	char ch='y';
	while(ch!='n')
	{
		new=creat_new_node();
		if(head==NULL)
		{
			head=new;
		}
		else
			last->next=new;
		last=new;
		printf("\nDo you  want to continue creating new node (y or n) : ");
		scanf("\n%c",&ch);
	}
	printf("\n.................Print the List......................\n");
	travsel(head);
	
	printf("\n.................Print the single list in reverse ................\n");
	reverse_list(&head);

	printf("\n................Print the list after revers.............\n");
	travsel(head);
	return 0;
}
