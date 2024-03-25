#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll p,a,b,c,d,ans;
        cin>>p>>a>>b>>c;
        if(p%a==0 || p%b==0 || p%c==0)
        {
            cout<<0<<endl;
        }
        else
        {
            a=a-(p%a);
            b=b-(p%b);
            c=c-(p%c);


            ans=min(a,b);
            ans=min(ans,c);
            cout<<ans<<endl;
        }
    }

}

