#include<stdio.h>
#include<string.h>
void stncat(char *,char *,int);
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
	
	stncat(str1,str2,n);
	
	return 0;
}

void stncat(char *str1,char *str2,int n)
{
	int l,i;
	l=strlen(str1);
	for(i=0;i<n;i++,l++)
	{
		str1[l]=str2[i];
	}
	str1[l]='\0';
	printf("\n%s\n",str1);
}
