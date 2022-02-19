#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,x;
        cin>>n>>m>>x;
        ll clm=x/n,rem=x%n;
        ll ans=clm;
        if(x%n!=0)
        {
            clm++;
            ans++;
            ans+=(m*(rem-1));
        }
        else
        {
            ans+=(m*(n-1));
        }


        cout<<ans<<endl;
    }

}

