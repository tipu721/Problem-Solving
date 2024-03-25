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
        ll n,ar[30];
        cin>>n;
        n*=2;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        sort(ar,ar+n);
        ll ans[30];
        int p=0;
        for(int i=1; i<n; i+=2)
        {
            ans[i]=ar[p++];
        }
        for(int i=0; i<n; i+=2)
        {
            ans[i]=ar[p++];
        }
        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

}

