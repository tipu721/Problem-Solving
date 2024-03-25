#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mn=min(a,c);
    mn=min(mn,d);
    ll ans=mn*256;
    cout<<ans<<endl;

    a=a-mn;
    c=c-mn;
    d=d-mn;
    int mn2=min(b,a);
    cout<<mn2<<endl;
    ans=ans+32*mn2;
    cout<<ans<<endl;
    main();
}
