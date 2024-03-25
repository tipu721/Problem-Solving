#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int ans=0;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i-1]==s[i] and s[i-1]!='#')
            {
                ans++;
                s[i]='#';
            }
            else if(i>1 and s[i-2] == s[i] and s[i-2]!='#')
            {
                s[i]='#';
                ans++;
            }
        }
        cout<<ans<<endl;
    }

}

