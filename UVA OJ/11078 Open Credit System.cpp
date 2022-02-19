#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long ans=-10000000;
        long long mx=-100000000;
        while(n--)
        {

            cin>>a;
            if(mx-a>ans)
                ans=mx-a;
            if(a>mx)
                mx=a;
        }
        cout<<ans<<endl;
    }
    return 0;
}
