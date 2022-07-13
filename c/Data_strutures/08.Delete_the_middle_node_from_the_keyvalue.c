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

int check_func(list *temp,int key)
{
	int count=0;
	while(temp)
	{	
		if(temp->num!=key)
		{
			temp=temp->next;
		}
		else
		{
			count=1;
			break;
		}
	}
	return count;
}

void Delete_keyvalue(list **head,int keyvalue)
{
	list *temp=*head;
	list *new=NULL;
	int check;
	check=check_func(temp,keyvalue);
	if(check==0)
	{	
		printf("*******************Given keyvalue is not in list**********************\n");
	}
	else
	{
		if((*head)->num==keyvalue)
		{
			*head=(*head)->next;
			free(temp);
		}
		else
		{
			list *x=temp->next;
			while(x->num!=keyvalue)
			{
				if(temp)
				{
					temp=temp->next;
					x=x->next;
				}
			}
			new=temp->next;
			temp->next=new->next;
			free(new);
		}
	}
}






//main funtion 

int main()
{
        list *head=NULL,*new=NULL,*last=NULL;
        char ch ='y';
	int keyvalue;
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
	
	printf("\n.................Delete the node from list at given keyvalue......................\n");
	printf("Enter keyvalue you want to delete from list : ");
	scanf("%d",&keyvalue);
	Delete_keyvalue(&head,keyvalue);

	printf("\n...................Print the List......................\n");
	travsel_func(head);

        return 0;
}

