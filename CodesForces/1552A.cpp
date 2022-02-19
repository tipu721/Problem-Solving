#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        string s,s1;
        cin>>n;
        cin>>s;
        s1=s;
        sort(s.begin(),s.end());
        int ans=0;
        for(int i=0;i<n; i++)
        {
            if(s[i]!=s1[i])
                ans++;
        }
        cout<<ans<<endl;

    }

}

