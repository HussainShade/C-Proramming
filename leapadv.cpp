#include<stdio.h>
int main(){
int year,nextyear,previousyear;
printf("enter the year;");
scanf("%d",&year);
if(year%400==0||year%4==0&&year%100!=0)
{	 	
	   printf("it is a leap year\n");
       nextyear=year+4;
       printf("next leap year is:%d",nextyear);
} 
else
    {
        printf("it is not a leap year\n:");
        if(year%100==0)
        {
        	previousyear=year-4;
		}
		else
		{
			previousyear=year-year%4;
		}
        printf("previous leap year:%d",previousyear);
    }

return 0;
}