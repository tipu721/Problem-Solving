#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        for(ll i=1;;i*=10)
        {
            ll x=n/i;
            ll p=(i!=1);
            while(x)
            {
                p+=x%10;
                x/=10;
            }
            if(p<=s)
            {
                cout<<(n/i+(i!=1))*i-n<<endl;
                break;
            }

        }
    }
}
