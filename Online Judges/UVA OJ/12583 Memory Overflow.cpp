#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    string s;
    for(int i=1; i<=t; i++)
    {
        int c=0;
        cin>>n>>m>>s;
        int k=m;
        for(int i=0; i<n-m; i++)
        {
            for(int j=i+1; j<=k; j++)
            {
                if(s[i]==s[j])
                    c++;
            }
           // cout<<k<<endl;
            k++;
        }
        cout<<"Case "<<i<<": "<<c<<endl;

    }
}
