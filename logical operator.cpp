#include <stdio.h>
int main()
{
	int age,height;
	printf("Enter the age of Candiate:\n");
	scanf("%d",&age);
	printf("Enter the Height of Candiate:\n");
	scanf("%d",&height);
	if ((age>=18) && (height>=5))
	{
		printf("The candiate is selected");
	}
	else
	{
		printf("sorry,candiate not selected");
	}
	return 0;
}