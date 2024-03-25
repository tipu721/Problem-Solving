#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    ull a,b,c,ans2=0;
    cin>>a>>b>>c;
    ull ans=(a/c)+(b/c)+((a%c)+(b%c))/c;
    ull rem=max(a%c,b%c);
    if(a%c+b%c>=c)
        ans2=c-rem;
    cout<<ans<<" "<<ans2<<endl;
    main();
}

