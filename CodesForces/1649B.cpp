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
        ll sum=0,mx=0;

        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
            if(ar[i]>mx)
                mx=ar[i];
        }
        ll s=sum;
        sum-=mx;
        ll ans=mx-sum;
        if(s==0)
            cout<<0<<endl;
        else if(ans>1)
            cout<<ans<<endl;
        else
            cout<<1<<endl;
    }

}

