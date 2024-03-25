#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int cs0[n+1]= {0},cs1[n+1]= {0},c0=0,c1=0,ans1=1e8,ans2=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
                c1++;
            else
                c0++;
            cs1[i]=c1;
            cs0[i]=c0;

        }
        int css0[n+1]= {0},css1[n+1]= {0};
        c0=0,c1=0;
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='1')
                c1++;
            else
                c0++;
            css1[i]=c1;
            css0[i]=c0;

        }
        for(int i=0;i<n;i++)
        {
            int a=min((cs1[i]+css0[i]),(css1[i]+cs0[i]));
            ans1=min(ans1,a);
        }
        if(ans1!=1e8)
        cout<<ans1-1<<endl;
        else
            cout<<0<<endl;

    }
}
