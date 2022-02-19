#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[100005],ansar[100005];
int main()
{
    ll n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int ans=0;
    for(int i=1; i<n-1; i+=2)
    {

        ansar[i]=ar[ans];
        ans++;
    }
    if(n>2)
        cout<<ans<<endl;
    else
        cout<<0<<endl;
    for(int i=0; i<n-1; i+=2)
    {

        ansar[i]=ar[ans];
        ans++;
    }
    for(int i=0; i<n-1; i++)
        cout<<ansar[i]<<" ";
        cout<<ar[n-1];
    cout<<endl;
    main();
}
