#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,ans=1;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        ans*=i;
    }
    ans=ans/(n/2);
    cout<<ans<<endl;
    //main();

}

