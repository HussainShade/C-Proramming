=#include <stdio.h>
#include <string.h>
int main()
{
    int py,phy,ma,cp,total;
    float per;
    char div[10];
    printf("Input  the marks of Python, Physics, Mathematics and C programming : ");
    scanf("%d%d%d%d",&py,&phy,&ma,&cp);
    total = py+phy+ma+cp;
    per = total/4.0;
    if (per>=60)
	 strcpy(div,"First");
    else
	if (per<60&&per>=48)
	    strcpy(div,"Second");
	else
	    if (per<48&&per>=36)1
		strcpy(div,"Pass");
	     else
		strcpy(div,"Fail");
       printf("Marks in Python : %d\nMarks in Physics : %d\nMarks in Mathematics : %d\nMarks in C programming : %d\n",py,phy,ma,cp);
       printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n",total,per,div);
}
