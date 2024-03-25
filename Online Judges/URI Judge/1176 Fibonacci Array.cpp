#include<stdio.h>
int main()
{
    unsigned long long int a[1000],b,i,t;
    a[0]=0;
    a[1]=1;
    for(i=2; i<1000; i++)
        a[i]=a[i-2]+a[i-1];
        scanf("%llu",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%llu",&b);
        printf("Fib(%llu) = %llu\n",b,a[b]);
    }
    return 0;

}
