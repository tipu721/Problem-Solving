#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        vector<double>vec;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            double a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        double sum=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
               sum+=((vec[j-1]/j));

            }

        }


       int ans=round(sum);
        if(ans==m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
