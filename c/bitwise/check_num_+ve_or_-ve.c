#include<stdio.h>
int main()
{
int n ;
printf("Enter a number : ");
scanf("%d",&n);
if((n>>31)&1)
{
	printf("negative number ");
}
else
	printf("positive number ");
return 0;
}

