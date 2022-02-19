#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        int c=0,c1=0;
        for(int i=1;i<=n;i++)
        {
            cin>>s;
            if(i==n)
            {
                for(int j=0;j<m-1;j++)
                {
                    if(s[j]=='D')
                        c++;
                }

            }
            else
            {
                if(s[m-1]=='R')
                    c++;
            }
        }
        cout<<c<<endl;
    }
}
