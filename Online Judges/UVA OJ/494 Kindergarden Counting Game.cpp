#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    while(gets(s))
    {
        int l=strlen(s),c=0;
        for(int i=0; s[i]!='\0'; i++)
        {
            if(
               ((s[i]>='A'&&s[i]<='Z')||
                (s[i]>='a'&&s[i]<='z'))
               &&
               ((s[i+1]<'A'||s[i+1]>'Z')&&
                (s[i+1]<'a'||s[i+1]>'z'))
               )
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
