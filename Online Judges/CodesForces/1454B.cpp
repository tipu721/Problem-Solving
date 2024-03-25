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
        vector<int>v,vc;

        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);

        }
        int ans=-1;
        for(int i=1; i<=n; i++)
        {
            if(vc[i]==1)
            {
                ans=i;
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(ans==v[i])
            {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;

    }
}
