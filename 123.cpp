#include <stdio.h>
#include <string.h>
int main()
{
	char str[50],n[50];
	int i;
	printf("Enter the string:");
	gets(str);
	n[i]=str[i];
	printf("The reversed string is:");
	for(i=strlen(str)-1;i>=0;i--)
	{
		printf("%c",str[i]);
		if(str[i]==n[i])
	    {
		    printf("\nThe given string is palindrome");
		    break;
     	}
	    else
	    {
	    	printf("\n not a palindrome");
     	}
	}
	
	return 0;
}