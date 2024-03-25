#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(a>b+c)
        cout<<"+\n";
    else if(b>a+c)
        cout<<"-\n";
    else if(a==b&&c==0)
        cout<<0<<endl;
    else
        cout<<"?\n";
   // main();
}
