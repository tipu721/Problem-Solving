#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll ar[200005];
    for(int i=0; i<n; i++)
        cin>>ar[i];
    sort(ar,ar+n);
    ll sum=ar[n/2],i=1;
    while(i<=n/2)
    {
        if(k<ar[n/2+1]*i-sum)
            break;
        sum+=ar[n/2+i];
        i++;

    }
    cout<<(k+sum)/i<<endl;
    return 0;

}
