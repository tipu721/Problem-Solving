#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cout<<"Case "<<i<<": ";
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(i==4 && s[i]==':')
            {
                //cout<<i<<endl;
                cout<<'s';
            }
            cout<<s[i];
        }
        cout<<endl;
    }
}
