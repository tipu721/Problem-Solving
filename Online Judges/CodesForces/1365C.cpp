#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp1,mp2,ans;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        mp1[a]=i;
    }
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        mp2[a]=i;
    }
    int mx=0;
    for(int i=1; i<=n; i++)
    {
        int a=(mp1[i]-mp2[i]);
        if(a<0)
            a+=n;
        ans[a]++;
        mx=max(ans[a],mx);
    }
    cout<<mx<<endl;
   // main();
}
