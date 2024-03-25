#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {

        int n,c0=0,c1=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            int a;
            cin>>a;
            if(a==0)
                c0++;
            else
                c1++;
        }
        if(c0>=n/2)
        {
            cout<<n/2<<endl;
            for(int i=1; i<=n/2; i++)
                cout<<0<<" ";
            cout<<endl;
        }
        else
        {
            if((n/2)%2!=0)
            {
                cout<<n/2+1<<endl;
                for(int i=0; i<=n/2; i++)
                    cout<<1<<" ";
                cout<<endl;
            }
            else
            {
                cout<<n/2<<endl;
                for(int i=1;i<=n/2;i++)
                    cout<<1<<" ";
                cout<<endl;
            }

        }


    }
}
