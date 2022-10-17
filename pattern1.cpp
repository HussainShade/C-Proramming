#include <stdio.h>
int main()
{
	int m,n,i,j,k;
	printf("Enetr the number of rows:");
	scanf("%d",&n);
	m=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("1");
		}
		m--;
		printf("\n");
	}
	return 0;
}