#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int c1=0,c0=1e5;
        int res = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                res+=min(c0*b,a);
                c0=0;
                c1=1;
            }
            else if(c1)c0++;
        }
        cout<<res<<endl;
    }
    return 0;
}
