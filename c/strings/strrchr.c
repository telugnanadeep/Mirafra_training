#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *my_strrchr(char *,char );
int main()
{
char str[50];
char ch;
printf("enter string : ");
scanf("%[^\n]s",str);
printf("enter char : ");
scanf("\n%c",&ch);

char *x = my_strrchr(str,ch);
printf("%s\n",x);
return 0;
}

char *my_strrchr(char *x, char c)

{
    int i,k,l=strlen(x);
    char *ptr;
    char y[50];
    i=l;
    while(x[i]!=c)
    {
        i--;
    }
    ptr=(char *)malloc(sizeof(char)*(l+1-i));
    for(k=0;x[i]!='\0';i++,k++)
    {
	ptr[k]=x[i];
    }
    ptr[k]='\0';
    return ptr;
	
}

