#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter no of rows:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j+1);
		}
		printf("\n");
	}
}