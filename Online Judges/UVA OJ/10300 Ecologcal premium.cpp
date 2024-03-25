#include<stdio.h>
int main()
{
    int t,n,a,b,c,i,j;

    while(scanf("%d",&t)!=EOF)
    {
        for(i=1; i<=t; i++)
        {
            long long sum=0;
            scanf("%d",&n);
            for(j=1; j<=n; j++)
            {
                scanf("%d %d %d",&a,&b,&c);
                sum+=a*c;
            }
            printf("%lld\n",sum);
        }
    }
    return 0;
}
