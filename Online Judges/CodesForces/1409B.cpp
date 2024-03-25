#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y,n,ans,p,m,q;
        cin>>a>>b>>x>>y>>n;
        p=a;
        q=b;
        m=n;
        if(a-n>=x)
        {
            a-=n;
        }
        else
        {
            if(a>x)
            {
                ll k=a-x;
                a-=k;
                n-=k;
                if(b-n>=y)
                {
                    b-=n;
                }
                else
                {
                    if(b>y)
                    {
                        b-=(b-y);
                        n-=(b-y);
                    }

                }
            }
        }
        if(q-m>=y)
        {
            q-=m;
        }
        else
        {
            if(q>y)
            {
                ll k=(q-y);
                q-=k;
                m-=k;
                if(p-m>=x)
                {
                    p-=m;
                }

                else
                {
                    if(p>x)
                    {
                        p-=(p-x);
                        m-=(p-x);
                    }

                }
            }
        }
        cout<<min(a*b,p*q)<<endl;

    }
}
