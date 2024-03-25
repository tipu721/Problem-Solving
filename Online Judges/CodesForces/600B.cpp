#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>a,b;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
//    for(int i=1;i<=n;i++)
//        cout<<a[i]<<" "<<endl;

    for(int i=0; i<m; i++)
    {
        ll x;
        cin>>x;
        b.push_back(x);
    }
    for(int i=0; i<m; i++)
    {
        cout<<upper_bound(a.begin(), a.end(), b[i])-a.begin()<<" ";


    }
    cout<<endl;
   // main();
}
