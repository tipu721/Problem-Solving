#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long a,b,n,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>s;
        long long ans1=(s/n);
        long long ans2=s%n;
        if(ans1<=a&&ans2<=b)
            cout<<"YES\n";
        else if(ans1>a)
        {
            s-=(a*n+b);
            if(s<=0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";


    }
}

