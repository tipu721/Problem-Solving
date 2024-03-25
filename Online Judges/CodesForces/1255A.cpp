#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,ans=0;
        cin>>a>> b;
        a=abs(a-b);
        int c=0;
        while(a!=0)
        {
            if(a>=5)
            {
                ans=a/5;
                a=a%5;
            }
            else if(a>=2)
            {
               a-=2;
               ans++;
            }
            else if(a>=1)
            {
                a-=1;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
