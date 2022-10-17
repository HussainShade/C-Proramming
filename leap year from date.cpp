#include<stdio.h>
int main()
{
int month,year,date;
printf("enter the data:");
scanf("%d/%d/%d",&date,&month,&year);
if(year%4==0&& year%100 != 0|| year%400 == 0)
{
printf("%d is a leap year",year);
}
else
{
printf("%d is not a leap year",year);
}

return 0;
}
