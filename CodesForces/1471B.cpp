#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,ans=0;
        cin>>n>>x;
        vector<ll>v,v2;
        for(int i=0; i<n; i++ )
        {
            ll a;
            cin>>a;
            v.push_back(a);
            ans+=a;
        }
        ll mn=1e10,k;
        for(int i=0; i<n; i++)
        {
            ll p=v[i];
            ll c=0;
            while(1)
            {
                if(p%x!=0)
                    break;
                else
                {
                    c++;
                    p=p/x;
                }
            }
            v2.push_back(c);
            if(c<mn)
            {
                mn=c;
                k=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i<k)
            {
                if(v2[i]>mn)
                    ans+=(v[i]*(mn+1));
                else
                    ans+=v[i]*v2[i];

            }
            else
            {
                if(v2[i]<mn)
                    ans+=(v[i]*v2[i]);
                else
                    ans+=(v[i]*mn);
            }
        }
        cout<<ans<<endl;


    }
}
