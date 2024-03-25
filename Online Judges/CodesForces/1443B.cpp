#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,res;
        cin>>a>>b;
        res=0;
        string s;
        cin>>s;
        int c1=0,c0=1e5;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                res+=min(c0*b,a);
                c1=1;
                c0=0;
            }
            else if(c1)
            c0++;

        }
        cout<<res<<endl;
    }
}
