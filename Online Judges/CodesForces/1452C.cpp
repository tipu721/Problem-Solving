#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll l=0,r=0,ans=0;
        while(r<s.size()&&l<s.size()-1)
        {
            if(s[l]=='(')
            {
                r=l;
                while(r<s.size()&&l<s.size()-1)
                {
                    r++;
                    if(s[r]==')')
                    {
                        ans++;
                        l++;
                        break;
                    }
                }
            }
            else
            {
                l++;

            }
        }
        //cout<<ans<<endl;
        l=0,r=0;
        while(r<s.size()&&l<s.size()-1)
        {
            if(s[l]=='[')
            {
                r=l;
                while(r<s.size()&&l<s.size()-1)
                {
                    r++;
                    if(s[r]==']')
                    {
                        ans++;
                        l++;
                        break;
                    }
                }
            }
            else
            {
                l++;

            }
        }
        cout<<ans<<endl;

    }
}
