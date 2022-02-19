#include<stdio.h>
int main()
{
    int n,k,a,b;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        int sum=n;
        while(n>=k)
        {
            a=n/k;
            sum+=a;
            b=n%k;
            n=a+b;

        }
        printf("%d\n",sum);
    }
}
