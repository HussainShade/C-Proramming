#include<stdio.h>
int main()
{

int i,j,a,b,count=0;
printf("enter the value:");
scanf("%d%d",&a,&b);
printf("the composite numbers are:",i);
for(i=a+1;i<b;i++)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
{
count=count+1;
}
}
if(count>2)
{
printf("%d \n",i);
}
count=0;
}
printf("\n");
return 0;
}
