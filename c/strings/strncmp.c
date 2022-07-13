#include<stdio.h>
#include<string.h>
void stncmp(char *,char *,int);
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
    
        stncmp(str1,str2,n);
    
        return 0;
}

void stncmp(char *str1,char *str2,int n)
{
	int i,count=0;
	for(i=0;str2[i]!=str2[n];i++)
	{
		if(str1[i]!=str2[i])
		{
			count=1;
			break;
		}
		else
			continue;
	}
	if(count ==1)
	{
		printf("Not equal");
	}
	else
		printf("Equal");

}


