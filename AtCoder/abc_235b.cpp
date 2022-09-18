#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll ar[n+2];
    for(int i=0; i<n; i++)
        cin>>ar[i];
    int p=0,ans=0;
    for(int i=0; i<n-1; i++)
    {
        if(ar[i+1]<=ar[i])
        {
            p = i;
            ans = ar[i];
            break;
        }
        else
        {
            ans = ar[i+1];
        }
    }
    cout<<ans<<endl;
   // main();
    return 0;
}

