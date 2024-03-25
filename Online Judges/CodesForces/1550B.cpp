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

        string s;
        ll n,a,b;
        cin>>n>>a>>b;
        cin>>s;
        ll ans=n*a;
        ll vz=0,vo=0,z=0,o=0;
        ll f=0;
        for(int i=0; i<n; i++)
        {

            if(s[i]=='0')
            {

                z++;
            }
            else if(z)
            {
                vz++;
                z=0;
            }




        }
        if(z)
            vz++;
        for(int i=0; i<n; i++)
        {

            if(s[i]=='1')
            {

                o++;
            }
            else if(o)
            {
                vo++;
                o=0;
            }




        }
        if(o)
            vo++;
        //cout<<vz<<" "<<vo<<endl;
        if(b>0)
            ans+=n*b;
        else
            ans+=b*(min(vo,vz)+1);
        cout<<ans<<endl;
    }

}

