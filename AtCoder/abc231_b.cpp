#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    map<string,int>mp;
    while(n--)
    {
        cin>>s;
        mp[s]++;
    }
    int mx=0;
    string ans;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second > mx)
        {
            mx= it->second;
            ans= it->first;
        }
    }
    cout<<ans<<endl;
   // main();
}


