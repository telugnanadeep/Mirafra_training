#include<stdio.h>
int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);
if((n & (n-1)) ==0)
	printf("%d is power of 2",n);
else
	printf("%d is Not power of  2",n);
}
