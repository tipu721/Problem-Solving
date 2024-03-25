#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    long double x,y,k,ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>k;
        ans=k+(y*k)-1;
        ans=ceil(ans/(x-1))+k;
        cout<<(long long)ans<<endl;

    }

}
