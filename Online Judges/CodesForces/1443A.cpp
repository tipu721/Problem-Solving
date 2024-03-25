#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p=1;
        int ans=4*n;
        if(ans%2==1)
            ans--;
       // cout<<1<<" ";
        for(int i=1;i<=n;i++)
        {
           cout<<ans<<" ";
           ans-=2;
        }
        cout<<endl;
    }
}
