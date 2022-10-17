#include <stdio.h>
int main()
{
	int x,y;
	printf("Enmter the value of x:");
	scanf("%d",&x);
	y=(x>5?3:4);
	printf("y=%d",y);
	return 0;
}