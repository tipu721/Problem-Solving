#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    vector<ll>cs;
    cin>>n>>q;
    ll s=0;
    cs.push_back(0);
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        s+=a;
        cs.push_back(s);
       // cout<<cs[i]<<endl;
    }
    while(q--)
    {
        ll a,ans;
        cin>>a;
        ll r=n-1,l=0,m=(r+l)/2;
        while(1)
        {
            if(a>cs[m-1]&&a<=cs[m])
            {
                //cout<<cs[m]<<" "<<a<<" "<<cs[m+1]<<endl;
                ans=m;
                cout<<ans<<endl;
                break;
            }
            else if(a>cs[m])
            {
                l=m+1;
            }
            else if(a<cs[m])
            {
                r=m-1;
            }
            m=(l+r)/2;
        }
       // cout<<ans<<endl;
    }

}

