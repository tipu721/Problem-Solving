#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ar1[105],ar2[105];
        cin>>n>>k;

        for(int i=0; i<n; i++)
        {
            cin>>ar1[i]>>ar2[i];

        }
        int d,c=0,ans=-1;
        for(int i=0;i<n;i++)
        {
            c=0;
            for(int j=0;j<n;j++)
            {
                d=abs(ar1[i]-ar1[j])+abs(ar2[i]-ar2[j]);
                if(d<=k)
                    c++;
            }
            if(c==n)
            {
                cout<<1<<endl;
                break;
            }
        }
        if(c!=n)
        cout<<-1<<endl;
    }
}
