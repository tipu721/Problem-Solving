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
        vector<ll>v;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll total=0;
        for(int i=0; i<n; i++)
        {
            int pos=upper_bound(v.begin(),v.end(),v[i]+2)-v.begin();
            //cout<<pos<<endl;
            pos--;
            if(pos-i>=1)
            {
                ll n=pos-i-1;
                total+=(n*(n+1))/2;
            }
        }
        cout<<total<<endl;
    }

}

