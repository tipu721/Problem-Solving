#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        ll b=a;
        vector<ll>v;

//        for(int i=0;i<v.size();i++)
//            cout<<v[i]<<endl;
        for(ll i=a;; i++)
        {
            vector<ll>v;
            ll b=i;
            while(b!=0)
            {
                int n=b%10;
                if(n!=0)
                    v.push_back(n);
                b=b/10;
            }
            int f=1;
            for(ll j=0;j<v.size();j++)
            {
                if(i%v[j]!=0)
                {
                    f=0;
                    break;
                }
            }
            if(f)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
