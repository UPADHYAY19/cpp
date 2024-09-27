#include<stdio.h>
#include<string.h>
int main()
{
  char s[20];
  int i,l;
  int flag =0;
  printf("enter your string :");
  scanf("%s",s);
  l = strlen(s);
  for(int i=0;i<l/2;i++)
  {
    if(s[i]!=s[l-i-1])
    {
        flag = 1;
        break;
    }
    
  } 
  if(flag)
  {
    printf("is not a palindrom string");
  } 
  else{
        printf("is a palindrom string");
  }
return 0;
} 