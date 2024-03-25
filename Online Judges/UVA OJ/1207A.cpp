#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long b,p,f,h,c;
        cin>>b>>p>>f;
        cin>>h>>c;
        //if(b>1)
        b=b/2;
        long long ans;
        if(h>c)
        {
            if(b<p)
            {
                ans=b*h;
            }
            else
            {
                ans=p*h;
                if(b-p<f)
                    ans+=(b-p)*c;
                else
                    ans+=f*c;
            }
        }
        else
        {
            if(b<f)
            {
                ans=b*c;
            }
            //cout<<ans<<endl;
            else
            {
                ans=f*c;
                if(b-f<p)
                    ans+=(b-f)*h;
                else
                    ans+=p*h;
            }
           // cout<<ans<<endl;
        }
        cout<<ans<<endl;

    }
}
