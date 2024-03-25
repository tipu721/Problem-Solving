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
        ll x,y;
        cin>>x>>y;
        double d=sqrt(x*x+y*y);
        if(d/(int)d==1)
            cout<<1<<endl;
        else if(d==0)
            cout<<0<<endl;
        else
            cout<<2<<endl;
    }

    return 0;
}
