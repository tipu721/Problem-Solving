#include<stdio.h>
#include<string.h>
int main()
{
    long int b,sum=0,t;
    char a[10];
    scanf("%ld",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%s",&a);
        if(strcmp(a,"donate")==0)
        {
            scanf("%ld",&b);
            sum=sum+b;
        }
        if(strcmp(a,"report")==0)
            printf("%ld\n",sum);
    }
    return 0;

}
