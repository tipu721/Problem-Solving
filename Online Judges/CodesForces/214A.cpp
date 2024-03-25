#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if((i*i+j==n)&&(i+j*j==m))
                c++;
        }
    }
    cout<<c<<endl;
   // main();
}
