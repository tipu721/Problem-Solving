#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,ans;
    cin>>a>>b>>c;
    long long d=min(a,b);
    if(a==b)
        ans=c*2+a+b;
    else
        ans=c*2+d+d+1;
    cout<<ans<<endl;
    main();
}
