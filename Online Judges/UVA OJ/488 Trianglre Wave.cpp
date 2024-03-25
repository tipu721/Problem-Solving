#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    for(long long i=1; i<=t; i++)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        for(long long j=1; j<=b; j++)
        {
            for(long long k=1; k<=a; k++)
            {
                for(long long l=1; l<=k; l++)
                    printf("%lld",k);
                printf("\n");
            }
            long long c=a-1;
            for(long long j=1; j<=a-1; j++)
            {
                for(long long k=a-1; k>=j; k--)
                    printf("%lld",c);
                printf("\n");
                c--;
            }
            if(j!=b)
            printf("\n");

        }
    if(i!=t)
        printf("\n");

    }
}
