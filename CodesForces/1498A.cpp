#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb   push_back;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for( ll i=n;;i++)
        {
            ll s=0,p=i;

            while(p!=0)
            {
                s+=(p%10);
                p=p/10;
            }
            if(__gcd( i,s)>1)
            {
                cout<<i<<endl;
                break;
            }
        }
    }


}

