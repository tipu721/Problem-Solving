#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    double a,b,c,d;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a/b == c/d)
            cout<<0<<endl;
        else if( a ==0 or c==0)
            cout<<1<<endl;
        else if((ll)(b*c) % (ll)(a*d) == 0 or (ll)(a*d) % (ll)(b*c) == 0 )
            cout<<1<<endl;
        else
            cout<<2<<endl;

    }


}


