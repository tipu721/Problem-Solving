#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,m,ans;
        cin>>n>>m;
        ans=(n/3)*(m/3);
        cout<<ans<<endl;
    }
    return 0;
}
