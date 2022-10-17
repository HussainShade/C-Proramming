#include<stdio.h>
#include<conio.h>
struct emp
{
    int empno ;
    char name[10] ;
    int bpay,allow,ded,npay ;
} e[10] ;
int main()
{
    int i, n ;
    printf("Enter the number of employees : ") ;
    scanf("%d", &n) ;
    for(i = 0 ; i < n ; i++)
    {
        printf("\nEnter the employee number : ") ;
        scanf("%d", &e[i].empno) ;
        printf("\nEnter the name : ") ;
        scanf("%s", e[i].name) ;
        printf("\nEnter the basic pay: ") ;
        scanf("%d", &e[i].bpay) ;
        e[i].allow=e[i].bpay*20/100;
        e[i].ded=e[i].bpay*10/100;
        e[i].npay = e[i].bpay + e[i].allow - e[i].ded ;
    }
    
    for(i = 0 ; i < n ; i++)
    {
        printf("Emp no=%d \n Emp name=%s \n Basicpay=%d \n allowances=%d \n deductions=%d \n Netpay=%d \n\n",e[i].empno,
        e[i].name,e[i].bpay,e[i].allow,e[i].ded,e[i].npay) ;
    }
    getch() ;
}