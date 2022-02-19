#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,m;
        cin>>x>>n>>m;
        for(int i=1;i<=n;i++)
        {
            if(x<=20)
                break;
            x=(x/2)+10;

        }
        for(int i=1;i<=m;i++)
        {
            x-=10;
        }
        if(x<=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
