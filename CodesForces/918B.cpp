#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=1;i<=n;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        mp[s2]=s1;

    }
    for(int i=1;i<=m;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        s2.erase(s2.end()-1,s2.end());
        //cout<<s2<<endl;
        cout<<s1<<" "<<s2<<"; #"<<mp[s2]<<endl;

    }
   // main();

}

