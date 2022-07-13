#include<stdio.h>
void stncpy(char *,char *,int n);

int main()

{
        char str1[100],str2[100];
        int n;
        printf("Enter str1 :");
        scanf("\n%[^\n]s ",str1);
        printf("\nEnter str2 :");
        scanf("\n%[^\n]s ",str2);
        printf("\nNo of Char to Append : ");
        scanf("%d",&n);
    
        stncpy(str1,str2,n);
    
        return 0;
}

void stncpy(char *str1,char *str2,int n)
{
int i;
for(i=0;str2[i]!=str2[n];i++)
{
str1[i]=str2[i];
}
str1[i]='\0';
printf("\n%s\n",str1);
return ; 
}
