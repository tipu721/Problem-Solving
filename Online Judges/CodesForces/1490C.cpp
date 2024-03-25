#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    map<ll,bool>mp;
    for(ll i=1;i<=1e4;i++)
    {
        mp[i*i*i]=true;
    }
    while(t--)
    {
        ll x,f=0;
        cin>>x;
        for(ll i=1;i<=1e4;i++)
        {
            ll baki = x - i * i * i;
            if(baki>0 && mp.count(baki))
            {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
