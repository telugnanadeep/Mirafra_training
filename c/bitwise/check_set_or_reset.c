#include<stdio.h>
int main()
{
int n,p;
printf("Enter number : ");
scanf("%d",&n);
printf("enter postion : ");
scanf("%d",&p);
if((n&(1<<p))!=0)
{
	printf("postion %d in %d is setbit ",p,n);
}
else
	printf("postion %d in %d is resetbit  ",p,n);
}
