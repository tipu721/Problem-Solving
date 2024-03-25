#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    int p=1;
    for(int i=1;i<=b;i++)
    {
        p=p*a;
    }
    return p;
}
int main()
{
    int t;
    long long n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long c=0,sum=0,m;
        cin>>n;
        m=n;
        while(n!=0)
        {
            n=n/10;
            c++;
        }
        long long k=m;
        while(m!=0)
        {
            long long a=m%10;
            sum=sum+power(a,c);
            m/=10;
        }
        if(sum==k)
            cout<<"Armstrong\n";
        else
            cout<<"Not Armstrong\n";
    }
    return 0;
}
