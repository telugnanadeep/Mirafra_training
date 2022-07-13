#include<stdio.h>
int main()
{
unsigned int n;
printf("Enter a hexadecimal number : ");
scanf("%x",&n);
int i,j;
for(i=0,j=31;i<j;i++,j--)
{
	if(!(n&(1<<i)) != !(n&(1<<j)))
	{
		n=n^(1<<i);
		n=n^(1<<j);
	}
}
printf("\n%x\n",n);
return 0;
}
