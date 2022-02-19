#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb    push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>v1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '*')
                v1.pb(i);
        }
        int ans=0,d=0;
        for( int i=0; i<v1.size()-1; i++)
        {
            if(i==0)
            {
                ans++;
                d=v1[i];
            }
            else if(v1[i+1] - d > k)
            {
                ans++;
                d=v1[i];
            }

        }
        cout<<ans+1<<endl;
    }

}
