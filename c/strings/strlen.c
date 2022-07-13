#include<stdio.h>
int stlen(char *);
int main()
{
	char str[100];
	int len;
	printf("Scan str : ");
	scanf("\n%[^\n]s",str);
	len=stlen(str);
	printf("\n%d\n",len);
	return 0;
}
int stlen(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}
