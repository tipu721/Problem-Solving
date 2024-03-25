#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int mil=n,omil=n;
        int c=0,s1zero=0,s1one=0,s2zero=0,s2one=0;
        for(int i=n-1; i>=0; i--)
        {
            if(s1[i]==s2[i])
            {
                mil=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s1[i]!=s2[i])
            {
                omil=i;
                break;
            }
        }
        int mn=min(mil,omil);
        for(int i=0; i<=mn; i++)
        {
            if(s1[i]=='0')
                s1zero++;
            else
                s1one++;
            if(s2[i]=='0')
                s2zero++;
            else
                s2one++;
        }
        int tzero=0,tone=0;
        for(int i=0; i<n; i++)
        {
            if(s1[i]=='0')
                tzero++;
            else
                tone++;
        }
        //cout<<tc++<<endl;
        if(s1[n-1]!=s2[n-1] && tzero!=tone)
            cout<<"NO"<<endl;
        else if(s1==s2)
            cout<<"YES"<<endl;
        else if(mil==n && tzero==tone)
            cout<<"YES"<<endl;
        else if(s1zero==s1one && s1zero==s2zero)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
