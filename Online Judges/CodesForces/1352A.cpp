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
        int c=0;
        int l=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0')
                c++;
        }
        cout<<c<<endl;
        for(int i=0;i<l;i++)
        {
            if(s[i]!='0')
            {
                cout<<s[i];
                for(int j=0;j<=l-i-2;j++)
                    cout<<"0";
                cout<<" ";
            }

        }
        cout<<endl;

    }
}
