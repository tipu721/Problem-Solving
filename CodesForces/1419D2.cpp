#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v,v2;
    for(int i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);

    }
    sort(v.begin(),v.end());
    stack<ll>st;
    for(int i=n-1;i>=0;i--)
    {
        st.push(v[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            ll a=st.top();
            st.pop();
            v[i]=a;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            ll a=st.top();
            st.pop();
            v[i]=a;
        }

    }
    ll c=0;
    for(int i=1;i<n-1;i++)
    {
        if(i%2==1&&v[i]<v[i-1]&&v[i]<v[i+1])
            c++;
    }
    cout<<c<<endl;
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;

}
