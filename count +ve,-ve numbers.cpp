#include<stdio.h>
 
int main()
{
 int S, i, a[10];
 int Pos_Count = 0, Neg_Count = 0;
 
 printf("\n Please Enter the Size of an Array :  ");
 scanf("%d", &S);
 
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < S; i++)
 {
      scanf("%d", &a[i]);
 }
  
 for(i = 0; i < S; i ++)
 {
   if(a[i] >= 0)
   {
 	Pos_Count++;
   }
   else
   {
 	Neg_Count++;
   }
 }
 printf("Negative numbers in array:%d",Neg_Count);
 printf("\npositive numbers in array:%d",Pos_Count);
 return 0;
 
}