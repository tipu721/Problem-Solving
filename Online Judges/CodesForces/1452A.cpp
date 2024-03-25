#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,ans;
        cin>>x>>y;
        ans=abs(x-y);
        if(ans<2)
            cout<<x+y<<endl;
        else
        {
            ans=max(x,y);
            ans=ans*2-1;
            cout<<ans<<endl;
        }
    }
}
