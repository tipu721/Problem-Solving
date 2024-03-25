#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        vector<ll>v;
        cin>>n;
        ll mn=1e10,mx=0-1;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n-1;i++)
        {
            if(i>0&&v[i-1]==-1&&v[i]!=-1)
            {
                mx=max(mx,v[i]);
                mn=min(mn,v[i]);
            }
            else if(i<n-1&&v[i+1]==-1&&v[i]!=-1)
            {
                mx=max(mx,v[i]);
                mn=min(mn,v[i]);
            }

        }
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==-1)
                v[i]=(mn+mx)/2;

        }
        for(int i=1;i<n;i++)
            ans=max(ans,abs(v[i-1]-v[i]));
        cout<<i<<endl;

        if(mx==-1||mn==1e10)
            cout<<0<<" "<<0<<endl;
        else
        cout<<ans<<" "<<(mn+mx)/2<<endl;


    }
}
