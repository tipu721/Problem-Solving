#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        long long sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=(i*i);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
