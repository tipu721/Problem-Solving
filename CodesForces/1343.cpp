#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%4==0)
        {
            cout<<"YES"<<endl;
            for(int i=1; i<=n/2; i++)
            {
                cout<<i*2<<" ";
            }
            for(int i=1; i<=n; i=i+2)
            {
                if(i==n-1)
                {
                    cout<<i+(n/2)<<endl;
                    break;
                }
                cout<<i<<" ";
            }
        }
        else
            cout<<"NO"<<endl;
    }
}
