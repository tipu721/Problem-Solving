#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    ll ar[n+2];
    set <ll> myset;
    set <ll> :: iterator it;
    for(int i=1; i<=n; i++)
    {
        cin >> ar[i];
    }
    for(int i=1; i<=k; i++)
    {
        myset.insert(ar[i]);
    }
    it = myset.begin();
    cout<<*it<<endl;
    for(int i=k+1; i<=n; i++)
    {
        myset.insert(ar[i]);
        if(ar[i]>=*it)
        {
            it++;
            cout<<*it<<endl;
        }
        else
        {
            cout<<*it<<endl;
        }
    }
    //cout<<endl;

    return 0;
}

