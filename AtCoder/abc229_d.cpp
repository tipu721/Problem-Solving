#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int k;
    cin>>k;
    int n=s.size();
    int cs[n+1];
    cs[0]=0;
    for(int i=0; i<n; i++)
    {
        cs[i+1]=cs[i]+(int)(s[i]=='.');
        //cout<<cs[i]<<endl;

    }
    ll hi=n,lo=0, mid = hi/lo;
    ll ans=0,f=0;
    while(lo<=hi)
    {
        mid = (hi+lo)/2;
        for(int i=0; i<=n-mid; i++)
        {
            if(cs[i+mid]-cs[i]<=k)
            {
                f=1;
            }
        }
        if(f)
        {
            ans=max(ans,mid);
            lo=mid+1;

        }
        else
            hi=mid-1;
    }
    cout<<ans<<endl;

}

