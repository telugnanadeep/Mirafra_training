// to check the size of pointer 
//For example, for 64-bit machine, 64/8 = 8 bytes and for 32-bit, 32/8 = 4 bytes.



#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr=NULL;
	printf("%ld\n",sizeof(ptr));
	return 0;
}

