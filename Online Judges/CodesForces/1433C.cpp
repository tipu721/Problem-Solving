#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[300005];
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        ll mx=0,ans=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            mx=max(ar[i],mx);

        }
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]==mx&&ar[i+1]<mx)
            {
                ans=i+1;
            }
        }
        for(int i=1;i<n;i++)
        {
            if(ar[i]==mx&&ar[i-1]<mx)
            {
                ans=i+1;
            }
        }
        if(mx&&ans)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }
}
