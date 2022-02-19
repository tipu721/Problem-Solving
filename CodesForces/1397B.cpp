#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,mx=1e16,ar[100005];
    cin>>n;
    for(ll i=0; i<n; i++)
        cin>>ar[i];
    sort(ar,ar+n);
    for(ll i=1;; i++)
    {
        ll p=1,s=0,f=0;
        for(ll j=0; j<n; j++)
        {
            s+=abs(p-ar[j]);
            p=p*i;
            if(s>mx)
            {
                f=1;
                break;
            }

        }
        if(f)
            break;
        mx=s;
    }
    cout<<mx<<endl;
    //main();
    return 0;

}
