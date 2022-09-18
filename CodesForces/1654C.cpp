#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
test:
    while(t--)
    {
        ll n,s=0;
        cin>>n;
        priority_queue<ll>x,y;
        for(ll i=0; i<n; i++)
        {
            ll v;
            cin>>v;
            x.push(v);
            s+=v;
        }
        y.push(s);
        while(!x.empty())
        {
            ll v=y.top();
            y.pop();
            if(v==x.top())
            {
                x.pop();
                continue;
            }
            if(v<x.top())
            {
                cout<<"NO"<<endl;
                goto test;
            }
            ll p=v/2;
            ll q=v-p;
            if(q==x.top())
                x.pop();
            else
                y.push(q);
            if(p==x.top())
                x.pop();
            else
                y.push(p);
        }
        if(y.size()!=0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}

