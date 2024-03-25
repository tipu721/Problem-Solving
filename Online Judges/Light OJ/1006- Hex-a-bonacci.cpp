#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        ll ar[10005];
        for(int i=0; i<=5; i++)
            cin>>ar[i];
        cin>>n;
        for(int i=6; i<=n; i++)
            ar[i] = (ar[i-1]+ar[i-2]+ar[i-3]+ar[i-4]+ar[i-5]+ar[i-6]) % 10000007;
        cout<<"Case "<<i<<": "<<ar[n]%10000007<<endl;
    }
}
