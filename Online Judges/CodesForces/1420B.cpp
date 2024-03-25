#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[100005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=0;i<=34;i++)
        {
            ll cnt=0;
            for( int j=0;j<n;j++)
            {
                if(ar[j]>=pow(2,i)&&ar[j]<pow(2,i+1))
                {
                    cnt++;
                }
            }
            ans+=(cnt*(cnt-1))/2;
        }
        cout<<ans<<endl;
    }
}
