#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll c1=0;
        for(int i=1; i<=n; i++)
        {

            if(i==1)
                cout<<9;
            else if(i==2)
                cout<<8;
            else if(i==3)
                cout<<9;
            else
            {
                cout<<c1;
                c1++;
                if(c1==10)
                    c1=0;
            }

        }
        cout<<endl;

    }
}


