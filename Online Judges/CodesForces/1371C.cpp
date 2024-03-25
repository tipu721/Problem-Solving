#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,m;
        cin>>a>>b>>n>>m;
        if((a+b<n+m)||(min(a,b)<m))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
}
