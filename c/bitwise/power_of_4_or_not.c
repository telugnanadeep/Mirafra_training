#include<stdio.h>
int main()
{
int n,count=0;
printf("Enter a number : ");
scanf("%d",&n);
int i=n;
if((n &(n-1))==0)//condition to check number is power f 2 or not
{	
	while((n&1)==0)
	{
		count++;
		n=n>>1;
	}
	if(count%2==0)
		printf("%d is power of 4",i);
	else
		printf("%d is not power of 4",i);
}
else
	printf("%d is not  power of 4",i);
return 0;
}
