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
		if(temp->num != key)
			temp=temp->next;
		else
		{
			count =1;
			break;
		}
	}
	return count;
}

//Insert the element in the middle of the list at given keyvalue

void insert_node_middle_of_list_at_given_keyvalue(list **head,int keyvalue)
{	
	int check;
        list *temp=*head;
        list *new=NULL;
	check=check_func(temp,keyvalue);
	if(check==0)
		printf("\n**************Given keyvalue is not there in list *************\n");
	else
	{

        	if(temp->num == keyvalue)
        	{
			new=creat_new_node();
                	new->next=*head;
                	*head=new;
        	}
        	else
        	{
			list *x=NULL;
			x=temp->next;
                	while(x->num != keyvalue)
                	{
                        	if(temp)
                        	{
                                	temp=temp->next;
                                	x=x->next;
                        	}
                        	else
                        	{
                                	printf("Given Keyvalue is Not there in list");
                        	}
       			}
			new=creat_new_node();
                	new->next=temp->next;
                	temp->next=new;
    
		}
	}
}



//main funtion 

int main()
{
        int keyvalue;
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

        printf("\n.............Insert the element in the middle of the list at given keyvalue.............\n");
        printf("Enter keyvalue where you want to insert new node : ");
        scanf("%d",&keyvalue);

        insert_node_middle_of_list_at_given_keyvalue(&head,keyvalue);

        printf("\n..................Print the list........................\n");
        travsel_func(head);
        return 0;
}


