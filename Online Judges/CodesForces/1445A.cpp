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
        ll n,x,ar1[55],ar2[55];
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>ar1[i];
            //cin>>ar2[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>ar2[i];
            //cin>>ar2[i];
        }
        if((ar1[0]+ar2[n-1])>x)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }

}
