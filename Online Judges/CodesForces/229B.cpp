#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,t,ar[100005];
    cin>>n>>t;
    for(int i=1; i<=n; i++)
        cin>>ar[i];
    ll s=0;
    int l=1,r=1,c=0,mx=0;
    for(int i=1; i<=n; i++)
    {
        if(s+ar[i]>t)
        {
            mx=max(mx,c);
            s=0;
            c=0;
        }

        s+=ar[i];
        c++;

    }
    mx=max(c,mx);
    cout<<mx<<endl;
    main();
}
