#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    for(int i=1; i<=t; i++)
    {
        map<string,int>m;
        string s;
        int n,k;
        cin>>n;
        while(n--)
        {
            cin>>s>>k;
            m[s]=k;
        }
        int d;
        string s2;
        cin>>d;
        cin>>s2;
        // cout<<m[s2]<<endl;
        if(m[s2]==0)
            printf("Case %d: Do your own homework!\n",i);
        else if(m[s2]<=d)
            printf("Case %d: Yesss\n",i);
        else if(m[s2]<=d+5)
            printf("Case %d: Late\n",i);
        else if(m[s2]>d+5)
            printf("Case %d: Do your own homework!\n",i);

    }
}
