#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    for(int i=1; i<=n; i++)
    {
        int nx;
        cout<<x<<" "<<y<<endl;
        for(int j=y+1; j<=m; j++)
        {
            cout<<x<<" "<<j<<endl;
            nx=j;
        }
        for(int j=1; j<y; j++)
        {
            cout<<x<<" "<<j<<endl;
            nx=j;
        }
        x++;
        y=nx;
        if(x>n)
            x=1;


    }
   // main();
}
