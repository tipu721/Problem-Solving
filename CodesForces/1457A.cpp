#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,m,n,r,c;
    cin>>t;
    while(t--)
    {
        cin>>m>>n>>r>>c;
        ll ans1,ans2,ans3,ans4,mx;
        ans1=abs(m-r)+abs(n-c);
        ans2=abs(r-1)+abs(c-1);
        mx=max(ans1,ans2);
        ans3=abs(m-r)+abs(c-1);
        mx=max(mx,ans3);
        ans4=abs(r-1)+abs(n-c);
        cout<<max(mx,ans4)<<endl;
    }
}
