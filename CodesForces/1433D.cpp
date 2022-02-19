#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[5004],n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        map<int,vector<int>>mp;

        int p=0;
        for(int i=1;i<n;i++)
        {
            if(ar[i]!=ar[0])
            {
                p=i+1;
                mp[1].push_back(i+1);
            }
        }
        if(p!=0)
        {
            cout<<"YES"<<endl;
            for(int i=1;i<n;i++)
            {
                if(ar[i]==ar[0])
                    mp[p].push_back(i+1);
            }
            for(int i=1;i<=n;i++)
            {
                if(mp.count(i))
                {
                    for(auto it = mp[i].begin(); it != mp[i].end(); it++)
                    {
                        cout<<i<<" "<<*it<<endl;
                    }
                }
            }
        }
        else
            cout<<"NO"<<endl;

    }
}
