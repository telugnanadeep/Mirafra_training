#include<stdio.h>
#include"inc/myfunc.h"

int main()
{
int a,b,add,sub;
printf("enter a numbers :");
scanf("%d",&a);
printf("\nenter a number :");
scanf("%d",&b); 
add=fun_add(a,b);
sub=fun_sub(a,b);
printf("add = %d\n",add);
printf("sub = %d\n",sub);
return 0;
}

