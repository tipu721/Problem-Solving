#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[56];
    cin>>t;
    while(t--)
    {
        int sp=0,sn=0,nar[100],par[100],np=0,pp=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if(ar[i]>0)
            {
                sp+=ar[i];
                par[pp++]=ar[i];
            }
            else
            {
                sn+=ar[i];
                nar[np++]=ar[i];
            }
        }
        sort(ar,ar+n);
        sort(nar,nar+np);
        sort(par,par+pp);
        if(sp==(-1*sn))
            cout<<"NO"<<endl;
        else
        {
            if(sp>(sn*-1))
            {
                for(int i=0; i<pp; i++)
                {
                    cout<<par[i]<<" ";
                }
                for(int i=0; i<np; i++)
                {
                    cout<<nar[i]<<" ";
                }
            }
            else
            {
                for(int i=0; i<np; i++)
                {
                    cout<<nar[i]<<" ";
                }
                for(int i=0; i<pp; i++)
                {
                    cout<<par[i]<<" ";
                }
            }
            cout<<endl;
        }
    }
}
