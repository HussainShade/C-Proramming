#include <stdio.h>
struct student
{
	int regno;
	char name[10];
	int marks;
};
int display(struct student cse);
int main()
{
	struct student s;
	display(s);
	return 0;
}
display(struct student cse)
{ 
	printf("Enter regno,name,marks=\n");
	scanf("%d%s%d",&cse.regno,&cse.name,&cse.marks);
	printf("Regno=%d\nname=%s\nmarks=%d\n",cse.regno,cse.name,cse.marks);
	return cse.regno,cse.name,cse.marks;
}