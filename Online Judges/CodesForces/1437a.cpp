#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    long double l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(l>((r+1)/2.0))

            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        cout<<(r+1)/2.00<<endl;
    }
}
