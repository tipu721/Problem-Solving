#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v1;
        vector<ll>:: iterator it;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v1.push_back(a);
            //v2.push_back(a);
        }
        //sort(v1.begin(),v1.end());
        //sort(v2.begin(),v2.end());
top:
    sort(v1.begin(),v1.end());
        int f=1;
        for(int i=0; i<v1.size()-1; i++)
        {
            for(int j=i+1; j<v1.size(); j++)
            {
                ll d = v1[j]-v1[i];
                it = find(v1.begin(),v1.end(),d);
                if(it == v1.end())
                {
                    //cout<<d<<endl;
                    v1.push_back(d);
                    if(v1.size()>300)
                    {
                        f=0;
                        cout<<"NO"<<endl;
                        break;
                    }
                    goto top;
                }

            }
            if(f==0)
                break;
        }
        if(f)
        {
            cout<<"YES"<<endl;
            cout<<v1.size()<<endl;
            for( int i=0; i<v1.size(); i++)
                cout<<v1[i]<<" ";
            cout<<endl;
        }

    }
}
