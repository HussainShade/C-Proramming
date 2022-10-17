#include <stdio.h>
int main()
{
	int n,m,i,k;
	char v;
	
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter how many multiples to print:");
	scanf("%d",&m);
	if(m<=0)
	{
		for(i=-1;i>=m;i--)
		{
			k=n*i;
			printf("%d\n",k);
		}
	}
	else
	{
		for(i=1;i<=m;i++)
	    {
		    k=n*i;
		    printf("%d\n",k);
    	}
		
	}
	
	return 0;
}