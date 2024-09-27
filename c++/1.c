#include <stdio.h>
#include<string.h>
/*char stack[20];
int top =-1;
void push(char c)
{  
    top++;
    stack[top] = c;
}

char pop()
{
    char ch;
    ch = stack[top];
    top--;
    return ch;
}*/
void main() {
    char s[10];
    gets(s);
    char ch;
    for(int i=0;i<strlen(s);i++)
    {
        push(s[ch]);
    }
    for(int i=strlen(s);i>0;i--)
    {
        
        printf("%s",s[ch]);
    }
}
  