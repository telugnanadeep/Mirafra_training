#include<stdio.h>
#include<string.h>
#include <bsd/string.h>
int main()
{
char dest1[50]="hello world! ";
char dest2[50]="hello world! ";
char dest3[50]="hello world! ";


char s1[50]="This is Gnanadeep";
char s2[50]="This is Gnanadeep";
char s3[50]="This is Gnanadeep";

printf("Strcpy function \n");
strcpy(dest1,s1);
printf("%s\n",dest1);

printf("strncpy function \n");
strncpy(dest2,s2,10);
printf("%s\n",dest2);

/*char ch='.';
printf("Strrchr() function \n");
strrchr(dest3,ch);
printf("%s\n",dest3);
*/
printf("Strlcpy() \n");
strlcpy(dest3,s3,10);
printf("%s\n",dest3);

return 0;
}
