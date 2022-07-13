#include<stdio.h>
int main()
{
int n,p;
printf("Enter number : ");
scanf("%d",&n);
printf("Enter postion : ");
scanf("%d",&p);

n=n^(1<<p);
printf("%d",n);
return 0;
}

