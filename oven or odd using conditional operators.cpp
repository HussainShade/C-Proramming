#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter th value of x:");
	scanf("%d",&x);
	y=(x%2==0?1:0);
	if(y==1)
	{
	   printf("%d is even",x); 
    }
	else
	{
	  printf("%d is odd",x);
	}
	return 0;
}