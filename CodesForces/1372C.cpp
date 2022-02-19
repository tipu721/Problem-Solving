#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ar[n+1];
        for(int i=1; i<=n; i++)
            cin>>ar[i];
        int l=1,r=n;
        for(int i=1;i<=n;i++)
        {
            if(ar[i]==i)
                l++;
            else
                break;
        }
        for(int i=n;i>=1;i--)
        {
            if(ar[i]==i)
                r--;
            else
                break;
        }
        int ans=0;
        for(int i=l;i<=r;i++)
        {
            if(ar[i]==i)
                ans++;
        }
        if(l==n+1)
            cout<<0<<endl;
        else if(ans)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
}
