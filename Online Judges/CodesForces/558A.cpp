#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n,pc=0,nc=0,sum=0;//,r=0,l=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a,b;
        cin>>a>>b;
        mp[a]=b;
        if(a<0)
            nc++;
        else
            pc++;
        sum+=b;
    }
    long long ans=0;
    if(pc==nc)
    {
        ans=sum;
    }

    else if(pc>nc)
    {
        for(int i=-1; i>=-100000; i--)
        {
            if(mp.count(i))
                ans+=mp[i];
        }
        int cp=0;
        for(int i=1; i<=100000; i++)
        {

            if(mp.count(i))
            {
                ans+=mp[i];
                cp++;
            }
            if(cp==nc+1)
                break;
        }

    }
    else if(pc<nc)
    {
        for(int i=1; i<=100000; i++)
        {
            if(mp.count(i))
                ans+=mp[i];
        }
        int cn=0;
        for(int i=-1; i>=-100000; i--)
        {

            if(mp.count(i))
            {
                ans+=mp[i];
                cn++;
            }
            if(cn==pc+1)
                break;
        }

    }
    cout<<ans<<endl;
  //  main();

}
