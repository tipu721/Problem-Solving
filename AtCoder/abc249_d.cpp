#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll ans = 8e18, j = 1e6;
    for(ll i=0; i<=1e6; i++)
    {
        while(j >= 0)
        {
            ll d = (i*i + j*j) * (i + j);
            if(d < n)
                break;
            ans = min(d, ans);
            j--;
        }
    }
    cout << ans <<endl;
    //main();
}

