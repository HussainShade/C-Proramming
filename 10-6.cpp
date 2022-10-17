#include <stdio.h>
int main()
{
int n; /* the upper limit is lower than the max int value,so no checks needed */
int divisor;
scanf("%d", &n);
divisor=1000;
printf("%d\n", n % divisor);
n = n/divisor;
divisor=100;
while ( n != 0 ){
printf ( "%d\n", n % divisor );
n = n/divisor;
}
return 0;
}