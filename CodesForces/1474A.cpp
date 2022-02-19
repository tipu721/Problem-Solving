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
        string s,ans;
        cin>>s;
        ans+='1';
        for(int i=1;i<n;i++)
        {
            if(s[i-1]+ans[i-1]==s[i]+'1')
                ans+='0';
            else
                ans+='1';
        }
        cout<<ans<<endl;
    }

}

