#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d,lf,rt,up,dn;
        ll x,y,x1,y1,x2,y2;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        bool f=true;
        lf=x-x1;
        rt=x2-x;
        dn=y-y1;
        up=y2-y;
        if(a>b&&lf<(a-b))
        {
            f=false;

        }
        else if(b>a&&rt<(b-a))
        f=false;
        else if(c>d&&dn<(c-d))
            f=false;
        else if(d>c&&up<(d-c))
            f=false;
       if(a==b and a and !lf and !rt  or c==d and c and !up and !dn)
            f = false;

        if(f)
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
