#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        vector<ll>v1;
        vector<ll>v2;
        vector<ll>v3;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v2.push_back(a);
            if(a==0)
                v3.push_back(v1[i]);

        }
        sort(v3.begin(),v3.end());
        ll v3p=v3.size()-1,sum=0;
        for(int i=0; i<n; i++)
        {
            if(v2[i]==0)
            {
                sum+=v3[v3p];
                cout<<v3[v3p--]<<" ";


            }
            else
            {
                cout<<v1[i]<<" ";
                //sum+=v1[i];
            }
            //cout<<sum<<endl;
        }
        cout<<endl;

    }
}
