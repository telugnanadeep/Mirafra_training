#include<stdio.h>
int main()
{
int n;
printf("Enter a number ");
scanf("%d",&n);
printf("%d\n",n);
n=((n & 0x0F)<<4 | (n & 0xF0)>>4);
printf("%d\n",n);
return 0;
}
