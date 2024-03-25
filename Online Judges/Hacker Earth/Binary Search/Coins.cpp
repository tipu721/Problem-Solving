#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>v,cs;
    for(int i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cs.push_back(0);
    for(int i=0; i<n; i++)
    {
        cs.push_back(cs[i]+v[i]);
    }
    bool ans=false;
    for(int i=1; i<=100000; i++)
    {
        //cout<<v[i]<<endl;
        ll l=lower_bound(v.begin(),v.end(),i)-v.begin()+1;
        ll u=upper_bound(v.begin(),v.end(),i)-v.begin();
        //cout<<l<<" "<<u<<endl;
        ll s1=cs[l-1],s2=cs[n]-cs[u];
        //cout<<s1<<" "<<s2<<endl;
        if(s1>0 && s1==s2)
            ans=true;
    }
    if(ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    //main();

}
