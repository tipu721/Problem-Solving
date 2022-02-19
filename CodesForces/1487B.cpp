#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        k--;
        if(n%2 == 0)
        {
            ll ans=k%n;
            cout<<ans+1<<endl;
        }
        else
        {
            ll mid=n/2;
            ll ans=(k+k/mid)%n;
            cout<<ans+1<<endl;
        }
    }

}
