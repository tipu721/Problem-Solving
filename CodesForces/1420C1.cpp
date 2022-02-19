#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q,s=0;
        vector<ll>v;
        cin>>n>>q;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
        int f=0;
        for(int i=1; i<n; i++)
        {
            if(f==0)
            {
                if(v[i]>v[i-1])
                    f=0;
                else
                {
                    s+=v[i-1];
                    f=1;
                    // cout<<s<<endl;
                }
            }
            else
            {
                if(v[i]<v[i-1])
                    f=1;
                else
                {
                    s-=v[i-1];
                    f=0;
                    //cout<<s<<endl;
                }
            }
        }
        if(f==0)
            s+=v[n-1];

        cout<<s<<endl;
    }
}
