#include<stdio.h>

int main()
{
int a=5;
int b=10;
const int *const ptr=&a;
printf("\n%p",&a);
printf("\n%p",ptr);
printf("\n%d",a);
*ptr=20;
*ptr=&b;
printf("\n%d",a);
}
