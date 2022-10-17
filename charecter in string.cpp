#include<stdio.h>
int main()
{
char val[10],find,flag=0;
int count=0;
printf("enter the character to be found:");
scanf("%c",&find);
printf("enter the string:");
scanf("%s",&val);
do
{
    if(val[count]==find)
    {
        printf("found in index:%d\n",count);
        flag+=1;
    }
    count+=1;
}
while(val[count]!='\0');
if(flag==0)
printf("element not found");
return 0;
}
