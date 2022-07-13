// creating a list of numbers using linked list 

#include<stdio.h>
#include<stdlib.h>


//defing structure
typedef struct list
{
	int num;
	struct list *next;
}list;


//function to creat a node
list *creat_new_node()
{
	list *new=(list *)malloc(sizeof(list));
	printf("\nEnter a number u want to add to list : ");
	scanf("%d",&new->num);
	new->next=NULL;
	return new;
}


//traversel the list 
void travsel_func(list *temp)
{
	while(temp)
	{	
		printf(" %d",temp->num);
		temp=temp->next;
	}
	printf("\n");
}



//main funtion 

int main()
{
	list *head=NULL,*new=NULL,*last=NULL;
	char ch ='y';
	while(ch!='n')
	{
		new=creat_new_node();
		if(head == NULL)
		{
			head=new;
		}
		else
		{
			last->next=new;
		}
		last = new;
		printf("Do you want to add another node (y or n) : ");
		scanf("\n%c",&ch);
	}

	printf("\n..................Print the List.......................\n");
	travsel_func(head);

	return 0;
}

