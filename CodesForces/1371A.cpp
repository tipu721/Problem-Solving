#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,r,ans;
        cin>>n>>r;
        if(n<=r)
        {
            ans=((n-1)*n)/2;
            ans+=1;
        }
        else
        {
            ans=(r*(r+1))/2;
        }
        cout<<ans<<endl;

    }
}
