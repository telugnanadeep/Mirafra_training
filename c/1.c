// To Know stack is uploaded up/down

#include<stdio.h>

int main()
{
	int x[2];
	if((&x[1]-&x[0])<0)
	{
		printf("down stack\n");
	}
	else
		printf("Up stack\n");

	return 0;
}
