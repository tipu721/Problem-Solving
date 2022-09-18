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
        ll ar[n+4];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        ll mx=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                mx = max(mx,ar[j]-ar[i]);
            }
        }
        cout<<mx<<endl;
    }


}


