#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q,k;
    cin >> n >> q >> k;
    ll ar[100005];
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
    }
    //ll q;
    //cin>>q;
    while(q--)
    {
        ll l,r,ans;

        cin>>l>>r;

        ans=(ar[l]-1) + (k-ar[r]) + 2*((ar[r]-ar[l]+1) - (r-l+1));
        cout<<ans<<endl;
    }
    //main();

}

