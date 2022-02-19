#include<stdio.h>
int main()
{
    int t;
    long long a,b,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a>b+c||b>a+c||c>a+b||a==0||b==0||c==0)
            printf("Case %d: Invalid\n",i);
        else
        {
            if(a==b&&b==c)
                printf("Case %d: Equilateral\n",i);

            else if(a==b||a==c||b==c)
                printf("Case %d: Isosceles\n",i);
            else if(a!=b&&b!=c)
                printf("Case %d: Scalene\n",i);
        }
    }
    return 0;

}
