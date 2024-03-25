#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,x;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        cin>>n>>x;
        ll sp=0,sn=0;
        bool f=false,f1=true;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            sp+=(a-x);
            if(a==x)
                f=true;
            if(a!=x)
                f1=false;
        }
        if(f1)
            cout<<0<<endl;
        else if(sp==0||f)
            cout<<1<<endl;
        else if(sp!=0)
            cout<<2<<endl;

    }
}
