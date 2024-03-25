#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
       // cout<<s<<endl;
        long double x;
        x=(-1+sqrt(1+4*2*k))/2;
        x=ceil(x);
        //cout<<x<<endl;

        ll ans=((x-1)*x)/2;
        k=k-ans-1;

        for(int i=n-1;i>=0;i--)
            {
                if(i==x||i==k)
                    cout<<'b';
                else
                    cout<<'a';

            }
        cout<<endl;

    }
}
