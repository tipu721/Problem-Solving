#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        vector<ll>v1,v2;
        map<ll,ll>mp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v1.push_back(a);
            v2.push_back(a);
            mp[a]=i;
        }
        ll pos=n-1,f=0,f1=0;
        for(int i=n; i>=1; i--)
        {

            for(int j=mp[i]; j<=pos; j++)
            {
                cout<<v1[j]<<" ";
                f=1;
            }
            if(f)
            {
                pos=mp[i]-1;

            }
            f=0;



        }
        cout<<endl;


    }

}

