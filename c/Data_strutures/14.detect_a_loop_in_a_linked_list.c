// creating a list of numbers using linked list 

#include<stdio.h>
#include<stdlib.h>


//defing structure
typedef struct list
{
        int num;
        struct list *next;
}list;


typedef struct node
{
	int num;
	struct list *next;
}node;


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

void creating_loop(list **last,list **head)
{
	(*last)->next=(*head)->next->next->next;

}

void check_loop_in_list(list *temp)
{
	list *p=NULL,*q=NULL;
	p=q=temp;
	while(temp)
	{
		p=p->next->next;
		q=q->next;
		if(temp)
		{
			temp=temp->next;
		}
		if(p==q)
		{
			printf("\nthere is loop inside the list\n");
			break;
		}
		else
		{
			printf("\nthere is no loop iside the list\n");
			break;
		}
	}


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
	printf("\n..............Created a loop inside linked list .................\n");
	creating_loop(&last,&head);
	
	printf("\n.................checking wheater there is a loop in linked list ...............\n");
	check_loop_in_list(head);

       // printf("\n..................Print the List.......................\n");
       // travsel_func(head);

        return 0;

}

