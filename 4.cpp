#include <stdio.h>
struct book
{
	char B_name[10];
    char A_name[10];
    int price;
}lib;
int main()
{
	struct book lib[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter Book Name,Author Name,price:\n");
		scanf("%s%s%d",&lib[i].B_name,&lib[i].A_name,&lib[i].price);
		
	}
	for(i=0;i<3;i++)
	{
		printf("Book Name=%s\nAuthor Name=%s\nprice=%d\n"
		,lib[i].B_name,lib[i].A_name,lib[i].price);
	}
	return 0;
}