#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],r[20];
	int i,b,c,n=0;
	printf("Enter the string:");
	gets(a);
	b=strlen(a);
	c=b;
	for(i=0;i<=b;i++)
	{
		r[i]=a[c];
		c--;
	}
	for(i=0;i<=b;i++)
	{
		if(a[i]==r[i])
		{
			++n;
		}
		else
		{
			continue;
		}
	}
	
	if(n==0)
	{
		printf("it is a palindrom");
	}
	else
	{
		printf("it is not a palindrome");
	}
	return 0;
}