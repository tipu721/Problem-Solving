#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v1;
    vector<ll>v2;
    vector<ll>v3;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v1.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v2.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        v3.push_back(v1[i]-v2[i]);
    }
     sort(v3.begin(),v3.end());
     ll pos,ans=0;
    for(int i=0;i<n;i++)
    {
        if(v3[i]<=0)
            continue;
        pos=lower_bound(v3.begin(),v3.end(),-v3[i]+1)-v3.begin();
        ans+=(i-pos);
    }
    cout<<ans<<endl;
   // main();
}
