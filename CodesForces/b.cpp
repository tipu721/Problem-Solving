#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        int odd1=0,even1=0,odd0=0,even0=0;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(s[i]=='1')
                    odd1++;
                else
                    odd0++;
            }
            else
            {
                 if(s[i]=='1')
                    even1++;
                else
                    even0++;
            }
        }
        int ans1=min(odd1+even0,even1+odd0);

        cout<<ans1<<endl;
    }
}
