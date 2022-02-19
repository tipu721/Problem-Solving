#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100000],s2[100000];
    while(scanf("%s %s",&s1,&s2)!=EOF)
    {
        char s3[1000000];
        int a=0,c=0;
        for(int i=0; i<strlen(s1); i++)
        {
            for(int j=a; j<strlen(s2); j++)
            {
                if(s1[i]==s2[j])
                {
                    c++;
                    a=j+1;
                    break;
                }

            }
        }
        if(c==strlen(s1))
        printf("Yes\n",c);
        else
           printf("No\n",c);
    }
}
