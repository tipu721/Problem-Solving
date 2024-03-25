#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,c;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        c=abs(a-b);
        printf("%lld\n",c);
    }
    return 0;
}
