#include<stdio.h>
int main()
{
 int num;
  printf("enter the number :");
  scanf("%d",&num);
  if(num==0)
       printf("input cannot be 0");
  else if(num<=0)
         printf("input cannot be negative");
  else if(num%2==0)
       printf("the given number is even");
  else if(num%2!=0)
 	 printf("the given number is odd");
}
