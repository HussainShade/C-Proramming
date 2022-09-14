#include <stdio.h>
struct student{
    char    name[30];
    int     roll;
    float   perc;
};
int main()
{
    struct student  std;       
    struct student  *ptr;         
    ptr= &std;                    
    printf("Enter details of student: ");
    printf("\nName:");        gets(ptr->name);
    printf("Roll No:");       scanf("%d",&ptr->roll);
    printf("Marks:");    scanf("%f",&ptr->perc); 
    printf("\nEntered details: ");
    printf("\nName:%s \nRollNo: %d \nName: %.02f\n",ptr->name,ptr->roll,ptr->perc);
    return 0;
}
