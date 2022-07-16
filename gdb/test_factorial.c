#include<stdio.h>
/*
int fact(int);
int main()
{
int num;
printf("enter a number ");
scanf("%d",&num);
int i=1;
int f = fact(num);
printf("\n%d! = %d",num,f);
return 0;
}

int fact(int num)
{

if(num == 0)
	return 1;
else
	return num * fact(num -1);
}	
*/

int main()
{
int num;
int i =1;
printf("enter a number : ");
scanf("%d",&num);
//int fact;
int fact=1;
for(i=1;i<=num;i++)
{
fact = fact * i;
}
printf("\n%d ! =  %d\n",num,fact);
return 0;
} 
