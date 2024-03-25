#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin>>n>>q;
    vector<ll>v;
    for(int i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
    }
    while(q--)
    {
        ll a,l,r,x;
        cin>>a;
        if(a==1)
        {
            cin>>x;
            if(v[x-1]==1)
                v[x-1]=0;
            else
                v[x-1]=1;
        }
        else
        {
            cin>>l>>r;
//            for(int i=0;i<n;i++)
//                cout<<v[i]<<" ";
//                cout<<endl;
            if(v[r-1]==0)
                cout<<"EVEN"<<endl;
            else
                cout<<"ODD"<<endl;
        }
    }
}
