#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        double ans;
        ans=ceil(n/2.0);
        ans-=1;
        cout<<(int)ans<<endl;

    }
}

