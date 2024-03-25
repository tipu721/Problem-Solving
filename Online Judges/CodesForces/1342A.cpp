#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,a,b;
        cin>>x>>y;
        cin>>a>>b;
        ll op=abs(x-0)+(y-0);
        ll ans=0;
        while(x!=0||y!=0)
        {
            if(x>0&&y>0&&a*2>b)
            {
               ll mn=min(x,y);
               ans+=mn*b;
               x-=mn;
               y-=mn;

            }
            else if(x<0&&y<0&&a*2>b)
            {
                ll mn=min(x,y);
                x+=mn;
                y+=mn;
                ans+=mn*b;
            }
            else
            {
                ans=ans+(abs(0-x)+abs(0-y))*a;
                x=0;
                y=0;

            }

        }
        cout<<ans<<endl;
    }
}
