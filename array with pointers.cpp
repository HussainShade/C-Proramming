#include<stdio.h>
int main()
{
	int i,n,sum=0;
	int a[10];
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
		sum+= *(a+i);
	}
	printf("Sum of the elements in a array:%d",sum);
	return 0;
}