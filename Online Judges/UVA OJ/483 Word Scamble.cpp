#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    while(gets(s))
    {
        char s2[100000];
        int p=0;
        for(int i=0; s[i]!='\0'; i++)
        {

            if(s[i]==' '||s[i]=='\0')
            {
                printf("%s",strrev(s2));
                if(s[i]!='\0')
                    printf(" ");


                p=0;
            }
            s2[p]=s[i];
            p++;

        }
        printf("%s",strrev(s2));
        printf("\n");
    }
}
