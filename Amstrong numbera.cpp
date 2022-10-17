#include<stdio.h>
int main()
{
int num,orgnum,rem,res=0;
printf("enter the number");
scanf("%d",&num);
orgnum=num;
while(orgnum!=0)
{
rem=orgnum%10;
res=res+rem*rem*rem;
orgnum=orgnum/10;
}
if(num==res)
{
printf("it is a armstrong number:",num);
}
else

{


printf("it is not an armstrong number:",num);
}
}
