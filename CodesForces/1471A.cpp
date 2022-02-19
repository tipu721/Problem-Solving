#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        long double x,ar[100005];
        long double ans1=0,ans2=0;
        cin>>x;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            ans1+=ceil(ar[i]*1.00/x);
            ans2+=ar[i];
        }
        ans2=ceil(ans2*1.00/x);
        cout<<(ll)ans2<<" "<<(ll)ans1<<endl;

    }
}
