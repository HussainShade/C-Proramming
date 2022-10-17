#include <stdio.h>
int main()
{
	int m1,m2,n1,n2,i,j,matrix1[10][10],matrix2[10][10],add_m[i][j];
	printf("Enter the value of m1 and n1:\n");
	scanf("%d%d",&m1,&n1);
	printf("Enter the value of m2 and n2:\n");
	scanf("%d%d",&m2,&n2);
	if((m1==m2)&&(n1==n2))
	{
		printf("Enter the values of matrix 1:\n");
		for(i=1;i<=m1;i++)
		{
			for(j=1;j<=n1;j++)
			{
				scanf("%d",&matrix1[i][j]);
			}		
		}
		printf("Enter the values of matrix 2:\n");
		for(i=1;i<=m2;i++)
		{
			for(j=1;j<=n2;j++)
			{
				scanf("%d",&matrix2[i][j]);
			}		
		}
		for(i=1;i<=m1;i++)
		{
			for(j=1;j<=n2;j++)
			{
				add_m[i][j]=matrix1[i][j]+matrix2[i][j];
				printf("%d\n",add_m[i][j]);
			}		
		}
	
	}
	else
	{
		printf("Order is Invalid");
	}
	return 0;
	
}