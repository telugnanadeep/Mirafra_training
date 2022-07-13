//set bit in given postion 
#include<stdio.h>
int main()
{
int n,p;
printf("enter a number : ");
scanf("%d",&n);
printf("\nenter a postion to setbit : ");
scanf("%d",&p);
n = n|(1<<p);
printf("\nafter seting the bit result %d",n);
return 0;
}

