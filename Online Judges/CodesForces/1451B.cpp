#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        pair<int,int>pr;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            pr=make_pair(s[i],i+1);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            string s2;
            int f=0;
            for(int i=r;i<n;i++)
            {
                if(s[i]==s[r-1])
                {
                    f=1;
                    break;
                }
            }
            for(int i=l-2;i>=0;i--)
            {
                if(s[i]==s[l-1])
                {
                    f=1;
                    break;
                }
            }
            if(f)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
    }
}

