#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v;
void pf(ll n)
{
    while(n % 2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }
    for(ll i=3;i*i<=n;i+=2)
    {
        while(n % i == 0 )
           {
                v.push_back(i);
                n = n/i;

           }
    }
    if(n>2)
    v.push_back(n);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        v.clear();
        ll n;
        cin>>n;
        pf(n);
        vector<ll>ans;
        map<ll,ll>mp;
        ll mx=0,x;
        for(ll i = 0; i < v.size(); i++)
        {
            mp[v[i]]++;
            if(mp[v[i]]>mx)
            {
                mx=mp[v[i]];
                x=v[i];
            }
        }
        if(mx==1)
        {
            cout<<1<<endl;
            cout << n << endl;

        }
        else
        {
            ll sum=1;
            for(ll i=1; i<mx; i++)
            {
                ans.push_back(x);
            }
            for(ll j:v)
            {
                if(j!=x)
                    sum*=j;

            }
            sum*=x;
            ans.push_back(sum);

            cout<<ans.size()<<endl;
            for(ll j:ans)
                cout<<j << " ";
            cout<<endl;
        }

    }

}

