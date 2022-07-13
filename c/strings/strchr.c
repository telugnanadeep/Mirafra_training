#include<stdio.h>
void stchr(char *,char );
int main()
{
	char str[100],ch;
	printf("Enter a string \n");
	scanf("%[^\n]s",str);
	printf("\nEnter a char value ");
	scanf("\n%c",&ch);
	stchr(str,ch);
	return 0;
}
void stchr(char *str,char ch)
{
int i,j;
for(i=0;str[i]!='\0';i++)
{
	if(ch==str[i])
	{
		break;
	}
}
for(;str[i]!='\0';i++)
{
	printf("%c",str[i]);
}
return ;
}
