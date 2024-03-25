#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n+2];
        for(ll i=0; i<n; i++)
            cin>>ar[i];
        vector<ll>v[n+2];
        for(ll i=1; i<=n; i++)
        {
            ll x;
            cin>>x;
            v[i].push_back(x);
        }
        ll ans[n+1];
        memset(ans,0,sizeof(ans));
        for(ll i=1; i<=n; i++)
        {
            sort(v[i].begin(),v[i].end(),greater<ll>());
            for(ll j=1; j<v[i].size(); j++)
            {
                v[i][j]+=v[i][j-1];
            }
            for(ll j=0; j<v[i].size(); j++)
            {
                ll k=j+1,l=v[i].size();
                ans[k]+=v[i][(l-(l%k))-1];
            }
        }
        for(ll i=1; i<=n; i++)
        {
            cout<<ans[i]<<" ";

        }
        cout<<endl;
    }


}
