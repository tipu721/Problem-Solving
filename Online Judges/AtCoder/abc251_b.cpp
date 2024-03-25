#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    ll n, w;
    cin >> n >> w;
    ll ar[n+1];
    for(int i=0; i<n; i++)
        cin >> ar[i];
    sort(ar, ar+n);
    ll s=0;
    set<ll>st;
    for(int i=0; i<n; i++)
    {
        if(s+ar[i]<=w)
        {
            s+=ar[i];
            st.insert(ar[i]);
        }
    }



}

