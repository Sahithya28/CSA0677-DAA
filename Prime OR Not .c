#include<stdio.h>
int main()
{
	int n,count=0,i;
	printf("enter any number:\n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("its neither prime nor composite.");
	}
	else
	{
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			count+=1;
		}
	}
	if(count==1)
	{
		printf("its a prime no..!");
	}
	else
	{
		printf("its a composite no..!");
	}
}
}
