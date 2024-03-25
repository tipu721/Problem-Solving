#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ar[105]= {0};
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            ar[a]++;

        }
        int c=0;
        vector<int>v;
        for(int i=1; i<=100; i++)
        {
            if(ar[i]>0)
            {
                c++;
                v.push_back(i);
            }

        }
        if(c>k)
            cout<<-1<<endl;
        else
        {

            for(int i=c+1; i<=k; i++)
            {
                v.push_back(1);
            }
            int n=1e4/v.size();
            cout<<n*v.size()<<endl;
            for(int i=1; i<=n; i++)
            {
                for(int j=0; j<v.size(); j++)
                    cout<<v[j]<<" ";
            }
            cout<<endl;
        }
    }
}
