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


int count_func(list *temp)
{
	int count=0;
	while(temp)
	{
		count++;
		temp=temp->next;
	}
	return count;
}




//Insert the element in the middle of the list

void insert_node_middle_of_list(list **head,int position)
{
	int count;
	
        list *temp=*head;
	list *new=NULL;
	count=count_func(temp);
	
	if(position<0 || position>count)
	{
		printf("\n******Given postion is not there i list******\n");
	}
	else
	{
        	new=creat_new_node();
        	if(position == 0)
        	{	
                	new->next=*head;
                	*head=new;
		}
		else
		{
			int i=0;
			while(i<position-1)
			{
				if(temp)
				{	
					temp=temp->next;
					i++;
				}
				else
				{
					printf("Given position is Not there");
					break;
				}
			}
			new->next=temp->next;
			temp->next=new;
		
		}	
	}
}




//main funtion 

int main()
{
        int position;
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

        printf("\n.............Insert the element in the middle of the list.............\n");
        printf("Enter position where you want to insert new node : ");
        scanf("%d",&position);

        insert_node_middle_of_list(&head,position);

        printf("\n..................Print the list........................\n");
        travsel_func(head);
        return 0;
}


