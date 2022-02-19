#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    vector<ll>v1(1e6),v2(1e6),cs(1e6);
    cin>>n;
    cs[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>v1[i];
        cs[i]=cs[i-1]+v1[i];
    }
    cin>>m;
    for(int i=1; i<=m; i++)
        cin>>v2[i];
    for(int i=1; i<=m; i++)
    {
         ll l=0,r=n,mid=(l+r)/2;
        while(l<=r)
        {
            if(v2[i]>cs[mid]&&v2[i]<=cs[mid+1])
            {
                cout<<mid+1<<endl;
                break;
            }
            else if(v2[i]>cs[mid])
            {
                l=mid+1;
            }
            else
                r=mid-1;
            mid=(l+r)/2;
        }
    }

}
