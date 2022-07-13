#include<stdio.h>
int f(int n);
int main()
{
int n,i;
printf("Enter a number : ");
scanf("%d",&n);
i=f(n);
printf("\npostion of right most set bit %d\n",i);
return 0;
}


int f(int n)
{
n=n ^ (n & (n-1));
int i=0;
while(n)
{
n>>=1;
i=i+1;
}

return i;
}

