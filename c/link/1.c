/*Find a pair with the given sum in an array: 
Input:
 
nums = [8, 7, 2, 5, 3, 1]
target = 10
 
Output:
 
Pair found (8, 2)
or
Pair found (7, 3)*/

#include<stdio.h>
int main()
{
int arr[]={8,7,2,5,3,1};
int target = 10;
int n,i,j,count=0;
n=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(arr[i]+arr[j]==target)
		{
			printf("pair found (%d,%d)\n",arr[i],arr[j]);
			printf("or\n");
			count++;
		}
	}
}
if(count == 0)
	printf("pair not found ");

return 0;
}

