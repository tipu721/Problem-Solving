#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll dot = 0, times = 0;
    ll ans = 0;
    if(n%2 == 1)
    {
        dot = 1;
        for(ll i = 1; i <= n; i+=2)
        {
            dot++;
            times++;
        }
        ans = 2 * dot * times;
    }
    else
    {
        dot = 1;
        times = 1;
        for(ll i = 2; i <= n; i+=2)
        {
            dot++;
            times++;
        }
        ans = dot * times;
    }
    cout << ans<<endl;
    //main();
}

