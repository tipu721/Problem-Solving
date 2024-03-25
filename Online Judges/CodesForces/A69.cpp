#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    ll sum1=0,sum2=0,sum3=0;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        sum1+=a;
        sum2+=b;
        sum3+=c;
    }
    if(sum1==0&&sum2==0&&sum3==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
   // main();
}
