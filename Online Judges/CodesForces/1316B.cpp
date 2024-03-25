#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s,s1,s2;
        cin>>n>>s;
        string mn=s,ans;
        int k=1;
        for(int i=0; i<n; i++)
        {
            if(i==n-1)
            {
               reverse(s.begin(),s.end());
               ans=s;

            }
            else
            {
                s1=s.substr(i);
                s2=s.substr(0,i);
                if((n-i-1)%2==0)
                    reverse(s2.begin(),s2.end());
                ans=s1+s2;
            }
           // cout<<s1<<endl<<s2<<endl;
            if(ans<mn)
            {
                mn=ans;
                k=i+1;
            }
        }
        cout<<mn<<endl<<k<<endl;

    }
}
