#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,c=0;
    cin>>t;
    while(t--)
    {
       // cout<<++c<<endl;
        ll n,m;
        cin>>n>>m;
        char ar[n+1][m+2];
        ll c=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>ar[i][j];
                if(ar[i][j]=='1')
                    c++;
            }
        }
        int f=0,ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if( ar[i][j]=='0' )
                {
                    if(j<m-1 && ar[i][j+1]=='0')
                        f=1;
                    if(i<n-1 && ar[i+1][j]=='0')
                        f=1;
                    if(i<n-1 && j<m-1 && ar[i+1][j+1]=='0')
                        f=1;
                    if(i<n-1 && j>0 && ar[i+1][j-1]=='0')
                        f=1;
                }
            }
        }
       // cout<<f<<endl;
        if(c==m*n)
            cout<<c-2<<endl;
        else if(f==1)
            cout<<c<<endl;
        else
            cout<<c-1<<endl;
    }



}


