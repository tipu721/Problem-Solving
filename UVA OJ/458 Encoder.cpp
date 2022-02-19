#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000000];
    while(gets(s))
    {
        for(long long i=0;i<strlen(s);i++)
        printf("%c",s[i]-7);
        printf("\n");
    }
    return 0;
}

