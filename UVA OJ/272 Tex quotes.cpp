#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    long long sum=0;

    while(gets(s))
    {

        long long l=strlen(s);
        for(long long i=0; i<l; i++)
        {
            if(s[i]=='"')
            {
                sum++;

                if(sum%2==1)
                    printf("``");
                else
                    printf("''");


            }
            else
                printf("%c",s[i]);
        }
    }
    return 0;
}

