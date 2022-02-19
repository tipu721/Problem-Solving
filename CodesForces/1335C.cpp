#include<bits/stdc++.h>
using namespace std;
int ac[200002];
int main()
{
    int t,ans;
    cin>>t;
    while(t--)
    {
        int n,a,mx=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            ac[i]=0;
        }
        for(int i=0; i<n; i++)
        {
            cin>>a;
            ac[a]++;
            mx=max(mx,ac[a]);
        }
        int c=0;
        for(int i=1; i<=n; i++)
        {
            if(ac[i]!=0)
                c++;
        }
        int ans;
        c--;
        if(c<mx)
        {
            ans=c;
            if(mx-c>1)
                ans++;
        }
        else
            ans=mx;
        cout<<ans<<endl;
    }
}
