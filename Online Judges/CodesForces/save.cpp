#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int rc=0,sc=0,pc=0,mx=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
                rc++;
            else if(s[i]=='P')
                pc++;
            else
                sc++;
        }
        mx=max(rc,pc);
        mx=max(mx,sc);
        if(mx==rc)
        {
            for(int i=0;i<s.size();i++)
                cout<<'P';
        }
        else if(mx==pc)
        {
            for(int i=0;i<s.size();i++)
                cout<<'S';
        }
        else
        {
            for(int i=0;i<s.size();i++)
                cout<<'R';
        }
        cout<<endl;
    }
}
