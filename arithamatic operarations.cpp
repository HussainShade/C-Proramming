#include <stdio.h>
int main()
{
	float a,b,add,sub,mul,di;
	printf("Enter two values:");
	scanf("%f%f",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	di=a/b;
	printf("the addition=%f\n",add);
	printf("the subtraction=%f\n",sub);
	printf("the multiplication=%f\n",mul);
	printf("the division=%f\n",di);
	return 0;
}