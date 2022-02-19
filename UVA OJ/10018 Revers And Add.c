#include<stdio.h>
long long rev(long long n)
{
    long long rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        long long n,a,c=0;
        scanf("%lld",&n);
        for(int i=1; i<1000; i++)
        {
            a=n+rev(n);
            c++;
            if(a==rev(a))
            {
                printf("%lld %lld\n",c,a);
                break;
            }
            n=a;

        }
    }
    return 0;
}
