#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{



    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n+5],br[n+5];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
            br[i]=1;
        }
        ll ans=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=2;i*j<=n;j++)
            {
                if(ar[i*j]>ar[i])
                br[i*j]=max(br[i]+1,br[i*j]);
            }
            ans=max(br[i],ans);
        }
        cout<<ans<<endl;
    }





}



