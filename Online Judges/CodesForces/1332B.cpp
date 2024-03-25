#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[1005];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        int prime[11]= {2,3,5,7,11,13,17,19,23,29,31};
        map<int,int>mp;
        int car[1005];
        int c=1;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<11; j++)
            {
                if(ar[i]%prime[j]==0)
                {
                    car[i]=j+1;
                    mp[car[i]];
                    break;
                }
            }
        }
        int k=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            mp[it->first]=++k;
        }
        cout<<k<<endl;
        for(int it=0;it<n;it++)
        {
            cout<<mp[car[it]]<<" ";
        }
        cout<<endl;


    }


}
