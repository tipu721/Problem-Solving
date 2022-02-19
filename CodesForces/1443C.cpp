#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>v1,v2;
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
        vector<pair<ll,ll>>v;

        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(v1[i],v2[i]));
        }
        sort(v.begin(),v.end());
        vector<ll>ssum;
        ll s=0;
        for(int i=n-1;i>=0;i--)
        {
            s+=v[i].second;
            ssum.push_back(s);
            //cout<<s<<endl;
        }
        ll ans=0,res=min(ssum[n-1],v[n-1].first);
        for(int i=0;i<n-1;i++)
        {
            ans=max(v[i].first,ssum[n-2-i]);
            res=min(ans,res);
        }
        cout<<res<<endl;
    }
}
