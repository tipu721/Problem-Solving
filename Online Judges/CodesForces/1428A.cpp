#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,y1,x2,y2,ans;
        cin>>x1>>y1>>x2>>y2;
        ans=abs(x1-x2)+abs(y1-y2);
        if(abs(x1-x2)!=0&&abs(y1-y2)!=0)
            ans+=2;
        cout<<ans<<endl;
    }

}

