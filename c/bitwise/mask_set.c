// masking is method when to set or reset more then 1 bit 
#include<stdio.h>
#define MASK  1<<2|1<<4
int main()
{
int n;
printf("Enter number : ");
scanf("%d",&n);
n=n|MASK;
printf("%d",n);
return 0;
}


