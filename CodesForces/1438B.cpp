#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n,ar[1003];
        set<ll>st;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            st.insert(a);
        }
       // cout<<st.size()<<endl;
        if(st.size()<n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}

