#include <stdio.h>
struct student
{
	char name[10];
    int roll_no;
}cse;
int main()
{
	struct student cse[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter Name,Rollno:\n");
		scanf("%s%d",&cse[i].name,&cse[i].roll_no);
		
	}
	for(i=0;i<3;i++)
	{
		printf("Name=%s\nRollno=%d\n",cse[i].name,cse[i].roll_no);
	}
	return 0;
}