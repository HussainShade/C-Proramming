#include<stdio.h>
int main()
{
int a,b;
scanf("%d",&a);
for(;;)
{
scanf("%d",&b);
if(b==-1)
{
printf("0");
break;
}
if(a!=b)
{
printf("1") ;
break;
}
}
return 0;
}
