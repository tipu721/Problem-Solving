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
        int ar1[200],ar2[200];
        for(int i=0;i<n;i++)
            cin>>ar1[i];
        for(int i=0;i<m;i++)
            cin>>ar2[i];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ar1[i]==ar2[j])
                    ans++;
            }

        }
        cout<<ans<<endl;
    }
}
