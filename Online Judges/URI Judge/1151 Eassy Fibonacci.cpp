#include<stdio.h>
int main()
{
    long long int i,a=0,b=1,d;
    int c;
    scanf("%d",&c);
    printf("%lld %lld",a,b);
    for(i=2;i<c;i++)
    {
        d=a+b;
        printf("% lld",d);
        a=b;
        b=d;
    }
    printf("\n");
    return 0;
}

