#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
        printf("%d ",s[i]);
}
