#include<stdio.h>
#include<string.h>
void cat(char *,char *);
int main()
{
char str1[100],str2[100];
printf("Scan 1 strings\n");
scanf("%[^\n]s",str1);
printf("\nscan 2 string");
printf("\n");
scanf("%s",str2);
cat(str1,str2);
return 0;
}

void cat(char *str1,char *str2)
{
int i,len;
len=strlen(str1);

for(i=0;str2[i]!='\0';i++,len++)
{
	str1[len]=str2[i];	
	
}
str1[len]='\0';
printf("%s",str1);
return ;
}
