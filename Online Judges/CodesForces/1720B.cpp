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
        ll n;
        cin>>n;
        ll ar[n+4];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        sort(ar,ar+n);
        cout<<ar[n-1]-ar[0]+ar[n-2]-ar[1]<<endl;
    }



}


