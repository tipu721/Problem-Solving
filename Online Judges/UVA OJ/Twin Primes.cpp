#include<bits/stdc++.h>
using namespace std;
int prime(long long n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int s;
    while(scanf("%d",&s)!=EOF)

    {
        int c=0;
        for(long long i=3; i<20000000; i++)
        {
            if(prime(i)==1&&prime(i+2)==1)
                c++;
            if(c==s)
            {
                printf("(%lld, %lld)",i,i+2);
                break;
            }

        }
    }
}
