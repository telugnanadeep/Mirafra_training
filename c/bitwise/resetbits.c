#include<stdio.h>
int main()
{
int n,p;
printf("Enter Number : ");
scanf("%d",&n);
printf("enter postion : ");
scanf("%d",&p);

n=n&~(1<<p);
printf("%d",n);
return 0;
}

