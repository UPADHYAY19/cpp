#include<stdio.h>
#include<string.h>
 char stack[20];
int top =-1;
void push(char ch)
{
    top++;
    stack[top]=ch;

}
char pop()
{
    char ch;
    ch = stack[top];
    top--;
    return ch;
}
void main()
{
    char s[10];
    gets(s);
    char ch;
    for(int i=0;i<strlen(s);i++)
    {
        push(s[i]);
    }
    for(int i =0;i<strlen(s);i++)
     {
        ch =pop();
        printf("%c",ch);

     }
     

}