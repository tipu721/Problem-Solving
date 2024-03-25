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
        string s;
        ll n;
        cin>>n>>s;
        map<ll,ll>x;
        x[0]=1;
        ll ans=0;
        for(ll i=0,sum=0; i<n; i++)
        {
            sum+=(s[i]-'0'-1);
          //  cout<<sum<<" "<<x[sum]<<endl;
            ans+=x[sum];
            x[sum]++;
        }
        cout<<ans<<endl;
    }

}
