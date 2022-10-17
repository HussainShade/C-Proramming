#include <stdio.h>
int main()
{
	float a,b,add,sub,mul,di;
	printf("Enter the value of a and b:");
	scanf("%f%f",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	di=a/b;
	printf("Addition value=%f\n",add);
	printf("Subtraction value=%f\n",sub);
	printf("Multiplication value=%f\n",mul);
	printf("Division value=%f",di);
	return 0;
}