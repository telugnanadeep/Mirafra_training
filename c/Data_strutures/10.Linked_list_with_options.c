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

//Insert the element at the beginning of the list
void insert_beginning(list **head)
{
        list *new=NULL;
        new=creat_new_node();
        new->next=*head;
        *head=new;
}

//count number of positions in list
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



// insert_a_element_at_end_of_list

void insert_element_at_end_of_list(list **head)
{
        list *temp=*head;
        list *new=NULL;

                new=creat_new_node();
                while(temp->next !=NULL)
                {    
                        temp=temp->next;
                }
                temp->next=new;
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




//.....Delete the first node from the list
void Delete_the_first_node(list **head)
{
        list *temp=*head;
        *head=(*head)->next;
        free(temp);
}


//Delete the node at given position 
void Delete_position(list **head,int position)
{
       // printf("i m in delete function");
        int count;
        list *temp=*head;
        list *new=NULL;
        count=count_func(temp);
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
                        while(i<position-1)
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


//Delete the node at given keyvalue
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

//Delete the last node from list 
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









//main funtion 

int main()
{
        list *head=NULL,*new=NULL,*last=NULL;
        char ch ='y';
	int position;
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
	ch = 'y';
	int option;
	while(ch!='n')
	{
		printf("\n*********************Options*****************************\n");
		printf("\n01.Insert a node at beginning \n02.Insert at a giiven position \n03.Insert at given keyvale \n04.Insert at end of the list \n05.Delete beginning node \n06.Delete at given position \n07.Delete at given keyvalue \n08.Delete at last node of list \n09.Print the List \n10.Quit \n");
	

		printf("Select one option: ");
		scanf("%d",&option);
		if(option > 0 || option <=10)
		{
			switch(option)
			{	
				case 1: printf("\n>>>>>>>>>>Insert a node at beginning<<<<<<<<<<<<\n");
					insert_beginning(&head);
					printf("...................Print the modified list ..............\n");
					travsel_func(head);
					break;
				
				case 2:	printf("\n>>>>>>>>>>Insert at given position<<<<<<<<<<<<<<\n");
					printf("Enter position you want to insert a node : ");
					scanf("%d",&position);
					insert_node_middle_of_list(&head,position);
					printf("\n......................Print modified list...................\n");
					travsel_func(head);
					break;
				case 3: printf("\n>>>>>>>>>Insert at given keyvalue<<<<<<<<<<<<<<<<\n");
					printf("Enter keyvalue you want to insert a node : \n");
					scanf("%d",&keyvalue);
					insert_node_middle_of_list_at_given_keyvalue(&head,keyvalue);				
					printf("\n......................Print the modified list ................\n");
					travsel_func(head);
					break;
				case 4: printf("\n>>>>>>>>>>Insert at end of the list<<<<<<<<<<<<<<<<\n");
					insert_element_at_end_of_list(&head);
					printf("\n...............Print the modified list.......................\n");
					travsel_func(head);
					break;	
					
				case 5: printf("\n>>>>>>>>>>>Delete at 1st node in list<<<<<<<<<<<<<<<\n");
					Delete_the_first_node(&head);
					printf("...................Print the modified list ..............\n");
                                        travsel_func(head);
					break;
				case 6: printf("\n>>>>>>>>>>Delete at given position<<<<<<<<<<<<<<<<<<\n");
                                        printf("Enter position you want to Delete  node : ");
                                        scanf("%d",&position);
					Delete_position(&head,position);
					 printf("...................Print the modified list ..............\n");
                                        travsel_func(head);
                                        break;
				case 7:printf(">>>>>>>>>>>>Delete node at given keyvalue<<<<<<<<<<<<<<<\n");
                                        printf("Enter keyvalue you want to insert a node : \n");
                                        scanf("%d",&keyvalue);
                                  	Delete_keyvalue(&head,keyvalue);    
                                        printf("\n......................Print the modified list ................\n");
                                        travsel_func(head);
                                        break;
				case 8: printf("\n>>>>>>>>>>Delete node at end of the list<<<<<<<<<<<<<<<<\n");
                                        Delete_last_node(&head);
                                        printf("\n...............Print the modified list.......................\n");
                                        travsel_func(head);
                                        break; 
 				case 9:	printf("\n...............Print the modified list.......................\n");
                                        travsel_func(head);
                                        break;
				case 10:printf("\n>>>>>>>>>>>>>>>>>>>>>>>END<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
					ch='n';
					break;
		
			}
		}
		
	}
	return 0;
} 
