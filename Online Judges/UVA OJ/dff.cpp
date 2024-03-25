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
        if(s=="0")
            cout<<1<<endl;
        else if(s=="1")
            cout<<66<<endl;
        else if(s[s.size()-1]=='2')
            cout<<56<<endl;
        else if(s[s.size()-1]=='3')
            cout<<96<<endl;
        else if(s[s.size()-1]=='4')
            cout<<36<<endl;
        else if(s[s.size()-1]=='5')
            cout<<76<<endl;
        else if(s[s.size()-1]=='6')
            cout<<16<<endl;
        else if(s[s.size()-1]=='7')
            cout<<56<<endl;
        else if(s[s.size()-1]=='8')
            cout<<96<<endl;
        else if(s[s.size()-1]=='9')
            cout<<36<<endl;
        else if(s[s.size()-1]=='0')
            cout<<76<<endl;
        else if(s[s.size()-1]=='1')
            cout<<16<<endl;

    }
}
