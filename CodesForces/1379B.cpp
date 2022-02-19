#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    read:
    while(t--)
    {
        ll l,r,m;
        cin>>l>>r>>m;
        ll x=m+l-r,y=m+r-l;
        for(ll a=l; a<=r; a++)
        {
            ll n_into_a=y-(y%a),c,b;

            if(n_into_a >= x && n_into_a<=y)
            {
                if(n_into_a >= m)
                {
                    ll diff=n_into_a-m;
                    c=r;
                    b=r-diff;
                }
                else
                {
                    ll diff=m-n_into_a;
                    b=r;
                    c=r-diff;
                }
                cout<<a<<" "<<b<<" "<<c<<endl;
                goto read;
            }

        }
    }
}
