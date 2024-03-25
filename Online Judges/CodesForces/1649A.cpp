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
        ll ar[n+3];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        ll ans=n-1;
        for(int i=1; i<n-1; i++)
        {
            if(ar[i]==0)
                break;
            else
                ans--;
        }
        for(int i=n-2; i>=1; i--)
        {
            if(ar[i]==0)
                break;
            else
                ans--;
        }
        if(n==2)
            cout<<0<<endl;
        else if(ans<0)
            cout<<0<<endl;
        else
            cout<<ans<<endl;
    }

}

