#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        map<ll,ll>mp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            mp[a]++;
        }
        ll ans=0,c=0;
        for(int i=1; i<=100000; i++)
        {
            if(mp[i])
            {
                c++;
                ans+=(mp[i]*(mp[i]-1))/2;
            }

        }
        ans*=c;
        cout<<ans<<endl;
    }

}
