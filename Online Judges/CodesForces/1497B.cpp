#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,c=0;
    cin>>t;
    while(t--)
    {
        ll n,m;
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            v.push_back(a%m);
        }
        sort(v.begin(),v.end());


    }
}
