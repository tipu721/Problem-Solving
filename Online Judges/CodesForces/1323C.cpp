#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,l=0,f=0,ans=0;

    string s;
    cin>>n>>s;
    for (int i=0;i<n;i++)
    {
        if(s[i]==')')
            c++;
        else
            c--;
        if(c>0&&f==0)
        {
            l=i+1;
            f=1;
        }
        else if(c==0&&f==1)
        {
            ans=ans+(i+1-l)+1;
            f=0;
        }

    }
    if(c!=0)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;
    main();
}
