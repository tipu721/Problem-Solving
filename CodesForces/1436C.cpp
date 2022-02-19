#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x, pos;
    cin>> n >> x >> pos;
    ll MOD = 1e9+7;
    ll result = 1;
    int left = 0, right = n, counts = 0, countb = 0;
    while(left < right)
    {
        int mid = (left + right)/2;
        if(mid == pos)
            left = mid + 1;
        else if(mid > pos)
        {
            countb++ ;
            right = mid ;
        }
        else
        {
            counts++;
            left = mid + 1;
        }
    }
    for(int i=0; i<counts; i++)
    {
        ll val = x-1-i;
        result *= val;
        result %= MOD;
    }
    for(int i=0; i<countb; i++)
    {
        ll val = n-x-i;
        result *= val;
        result %= MOD;
    }
    ll dc = n-counts-countb - 1;
    for( int i=2; i<=dc; i++)
    {
        result *=i;
        result %= MOD;

    }
    cout << result <<endl;
    return 0;
}

