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
        ll n,m;
        cin>>n>>m;
        string s,s1;
        cin>>s;
        s1=s;
        for(ll j=1; j<=min(m,n); j++)
        {
            for(ll i=1; i<n-1; i++)
            {

                if(s[i]=='0')
                {
                    if((s[i-1]=='1'&&s[i+1]=='0')||(s[i-1]=='0'&&s[i+1]=='1'))
                        s1[i]='1';
                }

            }
            s=s1;
            //cout<<s1<<endl;

        }
        if(s[0]=='0'&&s[1]=='1')
            s1[0]='1';
        if(s[n-1]=='0'&&s[n-2]=='1')
            s1[n-1]='1';
        cout<<s1<<endl;

    }

}

