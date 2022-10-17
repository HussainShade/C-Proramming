#include<stdio.h>
#include<conio.h>
#include<string.h>

void permute(char *str,int l,int pos,int r);
void swap(char &a,char &b);
void print_string(char *str,int r);

int main()
{
  char str[10]="";
  int l,r;
  printf("Enter The String : ");
  gets(str);
  l=strlen(str);
  printf("Enter The Number Of Places To permute on : ");
  scanf("%d",&r);
  printf("The Following Permuations are possible : ");
  permute(str,l,1,r);
  getch();
  getch();
  return 0;
}

void permute(char *str,int l,int pos,int r)
{
 
  if(pos==r+1)
  {
      print_string(str,r); 
      printf(" ");
      return; 
  }
  for(int i=pos-1;i<=l-1;i++)
  {
      
      str[pos-1]=str[pos-1]+str[i]-(str[i]=str[pos-1]);
      permute(str,l,pos+1,r);
      str[pos-1]=str[pos-1]+str[i]-(str[i]=str[pos-1]);
  }
}

void print_string(char *str,int r)
{
  for(int i=0;i<r;i++)
      printf("%c",str[i]);
}