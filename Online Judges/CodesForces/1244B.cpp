#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sz,p=200,q=200;
        string s;
        cin>>sz>>s;
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='1')
            {
                p=i;
                break;
            }
        }
        for(int i=sz-1; i>=0; i--)
        {
            if(s[i]=='1')
            {
                q=i+1;
                break;
            }
        }
        if(p>100&&q>100)
        {
            cout<<sz<<endl;
            //break;
        }
        else
        {
            int ans=max(sz-p,q);
            cout<<ans*2<<endl;
        }
    }
}
