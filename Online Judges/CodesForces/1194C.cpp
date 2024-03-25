#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t,c=1;
    cin>>t;
    while(t--)
    {
        string s,t,p;
        bool ans=false;
        cin>>s>>t>>p;
        for(int i=0; i<s.size(); i++)
        {
            ans=false;
            for(int j=i; j<t.size(); j++)
            {
                if(s[i]==t[j])
                    ans=true;
            }
            if(ans==false)
                break;
        }
        if(ans==false)
            cout<<"NO"<<endl;
        else
        {
            ans=true;
            map<char,int>mp,mp1;
            for(int i=0; i<s.size(); i++)
                mp[s[i]]++;
            for(int i=0; i<t.size(); i++)
                mp1[t[i]]++;
            for(int i=0; i<p.size(); i++)
                mp[p[i]]++;
            for(char i='a'; i<='z'; i++)
            {
                if(mp[i]<mp1[i])
                {
                    ans=false;
                    break;
                }
            }
           // cout<<c++<<endl;
            if(ans)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

}

