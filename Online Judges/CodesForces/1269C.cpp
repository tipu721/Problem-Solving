#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>en;
    map<int,int>ex;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        en[x]=i;
    }
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        ex[en[x]]=i;
    }
    int mx=ex[1],c=0;
    for(int i=2;i<=n;i++)
    {
        if(ex[i]<mx)
            c++;
        mx=max(mx,ex[i]);
    }
    cout<<c<<endl;
    main();
}
