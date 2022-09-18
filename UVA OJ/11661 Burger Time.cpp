#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    while(1)
    {
        cin>>l;
        if(l==0)
            break;
        string s;
        cin>>s;
        int lastD,lastR,ans=s.size();
        lastD= -ans;
        lastR= -ans;
        for(int i=0; i<s.size();  i++)
        {
            if(s[i]=='Z')
            {
                ans=0;
                break;
            }
            else if(s[i]=='D')
            {
                ans = min(ans, i-lastR);
                lastD=i;
            }
            else if(s[i]=='R')
            {
                ans = min(ans, i-lastD);
                lastR=i;
            }

        }
        cout<<ans<<endl;

    }
}
