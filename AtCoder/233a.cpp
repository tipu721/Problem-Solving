#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x,y;
    cin>>x>>y;
    y-=x;
    if(y>0)
    cout<<ceil(y*1.00/10*1.00)<<endl;
    else
        cout<<0<<endl;
   // main();


}

