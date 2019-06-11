#include<stdio.h>
int main()
{
char s[100];
int len;
scanf("%s",s);
for(len=0;s[len];len++);
s[len]='.';
s[len+1]='\0';
printf("%s",s);
}
