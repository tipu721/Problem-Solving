#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k, x;
    cin >> n >> k >> x;
    ll ar[n+2],sum=0;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    if(x >= sum)
    {
        cout << 0 <<endl;
        return 0;
    }
    sort(ar,ar+n);
    ll sum2 = 0;
    for(int i=n-1; i>=0; i--)
    {
        //ll m = 0;
        ll mul = ar[i]/x;

        ar[i] -= x * min(mul, k);
        ar[i] = max(ar[i], (ll)0);
        k -= min(mul , k);



    }
    sort(ar, ar+n);
    for(int i=n-1; i>=0; i--)
    {
        if(k > 0)
        {
            ar[i] -= x;
            ar[i] = max(ar[i], ll(0));
            k--;
        }
        sum2 += ar[i];
    }
    cout << sum2 <<endl;
    //main();
}

