#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,m;
        cin>>n>>m;
        bool ans=true;
        ll t,l,h;
        ll t1=0;
        while(n--)
        {
            cin>>t>>l>>h;

            if(abs(m-l)<abs(m-h))
            {
                if(abs(m-l)>(t-t1))
                    ans=false;
                m=l;
            }
            else
            {
                if(abs(m-h)>(t-t1))
                    ans=false;
                m=h;
            }
            t1=t;
            cout<<ans<<endl;

        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}

