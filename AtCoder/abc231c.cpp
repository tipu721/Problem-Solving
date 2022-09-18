#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    ll x;
    while(q--)
    {

        cin>>x;

        //vector<ll>::iterator lower, upper;
        auto lower = lower_bound(v.begin(), v.end(), x)-v.begin();
        cout<<n-lower<<endl;

    }
 //   main();


}

