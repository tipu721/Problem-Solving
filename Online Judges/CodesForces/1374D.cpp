#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v1,v2;
        for(int i=0; i<n; i++)
        {
            ll a,b;
            cin>>a;
            if(a%k==0)
                b=0;
            else
                b=((a/k)+1)*k-a;
            //cout<<b<<endl;
            v1.push_back(b);
        }
        sort(v1.begin(),v1.end());
        ll mx=v1[v1.size()-1];
        //cout<<mx<<endl;
        for(int i=1; i<n;)
        {
            ll b=v1[i];
            while(v1[i]>0&&v1[i-1]==v1[i])
            {
                b+=k;
                i++;
            }
            mx=max(mx,b);
            i++;

        }
        if(mx)
            cout<<mx+1<<endl;
        else
            cout<<mx<<endl;

    }
}
