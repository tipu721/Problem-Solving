#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string s;
        cout<<"Case "<<i<<":\n";
        cin>>n;
        getchar();
        while(n--)
        {
            getline(cin,s);
            for(int i=0;i<s.size();i++)
            {
                if(s[i]==' '&&s[i+1]!=' ')
                    cout<<' ';
                if(s[i]!=' ')
                    cout<<s[i];
                if(i==s.size()-1)
                    cout<<endl;
            }
        }
        if(i!=t)
            cout<<endl;
    }
}
