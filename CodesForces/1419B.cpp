#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0,v=2,x=1;
        n-=1;
        while(n>=0)
        {
            ans++;
            v<<=1;
            x<<=1;
            n-=(v-1)*x;
        }
        cout<<ans<<endl;
    }
}
