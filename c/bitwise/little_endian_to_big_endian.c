//converting little endian to big endian and big endian to little endian
#include<stdio.h>
int main()
{
unsigned int n;
printf("Enter hexa decimal number : ");
scanf("%x",&n);
printf("befor %x\n",n);
n=(n&0xFF000000)>>24|(n&0x00FF0000)>>8|(n&0x0000FF00)<<8|(n&0x000000FF)<<24;
printf("After %x\n",n);
return 0;
}

