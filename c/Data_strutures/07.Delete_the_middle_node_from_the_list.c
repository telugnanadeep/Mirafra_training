#include<stdio.h>
#include<stdlib.h>


//structur
typedef struct list
{
        int num;
        struct list *next;
}list;

//creating new node

list *creat_new_node()
{
        list *new=(list *)malloc(sizeof(list));
        printf("Enter Number u want to add in list : ");
        scanf("%d",&new->num);
        new->next=NULL;
        return new;
}

//printing the list

void travesl(list *temp)
{
        while(temp)
        {
                printf(" %d",temp->num);
                temp=temp->next;
        }
	printf("\n");
}

//counting no of positions in list
int count_positions(list *temp) 
{
        int count=0;
        while(temp)
        {
                count++;
                temp=temp->next;
        }
        return count;
}

//deleting for given  postion
void Delete_position(list **head,int position)
{
       // printf("i m in delete function");
        int count;
        list *temp=*head;
        list *new=NULL;
        count=count_positions(temp);
       // printf("count eq to %d",count);
        if(position<0 || position>count)
        {
                printf("\n*****************Given position in not there is list *******************\n");
        }
        else
        {
                if(position == 0)
                {
                        *head=(*head)->next;
                        free(temp);
                }
                else
                {
                        int i=0;
                        while(i<(position-1))
                        {
                                if(temp)
                                {
                                        temp=temp->next;
					i++;
                          	}
                        }
                        new=temp->next;
                        temp->next=new->next;
                        free(new);
                }

        }
}

    
    

// main program
int main()
{
        list *head=NULL,*new=NULL,*last=NULL;
        char ch='y';
        int position;
        while(ch!='n')
        {
        new=creat_new_node();
        if(head == NULL)
        {
                head = new;
        }
        else
        {
                last->next=new;
        }
        last = new;
        printf("Don you want to creat new node (y or n) : ");
        scanf("\n%c",&ch);
        }
        printf("\n........................Print the list....................\n");
        travesl(head);
    
        printf("\n............Delete the middle node from the list at given position...............\n");

        printf("Enter position where you want to delet node : ");
	scanf("%d",&position);
//	printf("\ncalling funtion\n");
	Delete_position(&head,position);
    

        printf("\n.......................Print the list.....................\n");
        travesl(head);
    

        return 0;
}

