#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--)
    {
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            if(s2[i]=='1')
            {
                if(s1[i]=='0')
                    ans++;
                else if(i>0 && s1[i-1]=='1')
                {
                    ans++;
                    s1[i-1]='0';
                }
                else if(i<n-1 && s1[i+1]=='1')
                {
                    ans++;
                    s1[i+1]='0';
                }
            }
        }
        cout<<ans<<endl;

    }

}
