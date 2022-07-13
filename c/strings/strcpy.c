#include<stdio.h>
void stcpy(char *,char *);

int main()
{
char str1[100],str2[100];
printf("Ente str1 :");
scanf("\n%[^\n]s",str1);

printf("Ente str2 :");
scanf("\n%[^\n]s",str2);

stcpy(str1,str2);
return 0;
}
void stcpy(char *str1,char *str2)
{
	int i;
	for(i=0;str2[i]!='\0';i++)
	{
		str1[i]=str2[i];
	}
	str1[i]='\0';
	printf("%s",str1);
}

