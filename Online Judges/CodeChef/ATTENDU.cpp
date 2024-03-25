#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        double pesent=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                pesent++;
        }
        pesent+=(120-n);
        pesent=(pesent/120.0)*100;
        //cout<<pesent<<endl;
        if(pesent>=75)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
