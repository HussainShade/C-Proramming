//G.Vishnu Vardhan,192011079,pointers addttion
#include <stdio.h>
int main()
{
	int first,second,*x,*y,sum;
	printf("Enter two Values=\n");
	scanf("%d%d",&first,&second);
	x=&first;
	y=&second;
	sum=*x+*y;
	printf("The Addition value of %d and %d=%d",*x,*y,sum);
	return 0;
}