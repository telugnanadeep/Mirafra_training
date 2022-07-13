#include<stdio.h>
void my_strstr(char *,char *);
int cmp(char *,char *,int );
int main()
{
char str[50];
char sub[50];
printf("Enter str : ");
scanf(" %[^\n]s",str);
printf("Enter sub : ");
scanf(" %[^\n]s",sub);
my_strstr(str,sub);


return 0;
}

void my_strstr(char *str,char *sub)
{
int j,i,count=0;
for(i=0;str[i]!='\0';i++)
{
	for(j=0;sub[j]!='\0';j++)
	{
		if((str[i]==sub[j]) && cmp(str,sub,i))
		{
			count =1;
		}
	}
}
if(count==1)
	printf("sub string found ");
else
	printf("sub sting not found");
return ;
}
int cmp(char *str,char *sub,int i)
{
int j,count=1;
for(j=0;sub[j]!='\0';i++,j++)
{
	if(str[i]!=sub[j])
	{	
		count=0;
		break;
	}
	else
		continue;
}
return count;
}
