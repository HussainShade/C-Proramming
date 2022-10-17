#include <stdio.h>
int main()
{
	int v=0,s=0,c;
	char s1[1000];
	printf("Enter the Sentence:");
	scanf("%s",&s1);
	if(s1=="a"||s1=="A"||s1=="e"||s1=="E"||s1=="i"||s1=="I"||s1=="o"||s1=="O"||s1=="u"||s1=="U");
	{
	   	v=v+1;
	   	printf("no of vowels:",v);
    }
    if(s1[v]==" ")
	{
	   	s=s+1;
	   	printf("no of spaces:",v);
    }
	else
	{
	  c=c-s;
	  printf("no of consonants");
	}
       return 0;
}   
    
