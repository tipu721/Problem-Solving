#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int>v;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);

        }
        long long ans=0,mx=0;
        for(int i=1;i<n;i++)
        {
            int d=abs(v[i]-v[i-1])/2;
            ans+=abs(v[i]-v[i-1]);

            if(d>=mx)
                mx=d;
        }
        ans-=mx;
        cout<<ans<<endl;
    }
}
