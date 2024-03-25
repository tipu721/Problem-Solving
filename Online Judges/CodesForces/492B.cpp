#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,l,ar[1003];
    cin>>n>>l;
    for(int i=0; i<n; i++)
        cin>>ar[i];
    sort(ar,ar+n);
    long double d=0;
    for(int i=1; i<n; i++)
    {
        if(ar[i]-ar[i-1]>d)
            d=ar[i]-ar[i-1];
    }
    d=d/2.00;
    if(ar[0]-0>d)
        d=ar[0]-0;
    if(l-ar[n-1]>d)
        d=l-ar[n-1];
    cout<<fixed<<setprecision(10)<<d<<endl;
   // main();



}
