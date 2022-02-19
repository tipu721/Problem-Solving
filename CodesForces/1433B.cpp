#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[55];
    cin>>t;
    while(t--)
    {

        cin>>n;
        int l =-1,r=n+1,ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if(l==-1&&ar[i]==1)
                l=i;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(r==(n+1)&&ar[i]==1)
                r=i;
        }
        if(l==r)
            cout<<0<<endl;
        else
        {
            for(int i=l;i<=r;i++)
            {
                if(ar[i]==0)
                    ans++;
            }
            cout<<ans<<endl;
        }
    }

}
