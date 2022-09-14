#include<stdio.h>

int main()
{
  int n,sq, cube;

  printf("Enter the Number: ");
  scanf("%d",&n);

  sq=n*n;
  cube=n*n*n;

  printf("\nThe Square of %d is %d ",n, sq);
  printf(" \nThe Cube of %d  is %d ",n, cube);

  return 0;
}
