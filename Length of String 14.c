#include<stdio.h>
int main()
{
	char s[100];
	printf("enter the string:");
	scanf("%s",s);
	int count=0;
	while(s[count]!='\0')
	{
		count++;
	}
	printf("length of string= %d",count);
}