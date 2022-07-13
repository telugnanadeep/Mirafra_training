#include<stdio.h>
#include<string.h>
void stcmp(char *,char *);
int main()
{
char str1[100],str2[100];
printf("enter char str1 : ");
scanf("\n %[^\n]s",str1);

printf("\nenter char str2 : ");
scanf("\n %[^\n]s",str2);

stcmp(str1,str2);
return 0;
}
void stcmp(char *str1,char *str2)
{
int i,count=0;
int len1,len2;
len1=strlen(str1);
len2=strlen(str2);
if(len1==len2)
{
for(i=0;str1[i]!='\0' && str2[i]!='\0';i++)
{
	if(str1[i]!=str2[i])
	{
		count=1;
		break;
	}
	else
		continue;
}
if(count == 1)
{
	printf("Not equal");
}
else
	printf("Equal");
}
else
{
	printf("Not Equal");
}
}
