#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int gcd;
    for(int i=1; i<=a&&i<=b; i++)
    {
        if(a%i==0&&b%i==0)
            gcd=i;
    }
    return gcd;
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        long long sum=0;
        for(int i=1; i<n; i++)
            for(int j=i+1; j<=n; j++)
                sum+=gcd(i,j);
        cout<<sum<<endl;
    }

    return 0;
}
