#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter any number:\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			count=count+i;
		}
	}
	if(count==n)
	{
		printf("its a perfect number.");
	}
	else
	{
		printf("Not a perfect number.");
	}
}