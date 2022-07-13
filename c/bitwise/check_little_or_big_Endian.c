#include<stdio.h>
int main()
{
int x = 1;
if((char)x&1)
	printf("Little Endian ");
else
	printf("big Endian ");
}
