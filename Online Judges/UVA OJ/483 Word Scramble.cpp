#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s,s1;
    while(getline(cin,s))
    {
        //cout<<s.size()<<endl;
        for(int i=0;i<s.size();i++)
        {
            s1+=s[i];
           // cout<<s[i];
            if(s[i+1]==' '&&i+2<s.size())
            {
                //cout<<1<<endl;
                reverse(s1.begin(),s1.end());
                cout<<s1<<" ";
                s1="";
                i++;
            }

            else if(i==s.size()-1)
            {
                reverse(s1.begin(),s1.end());
                cout<<s1<<endl;
                s1="";
            }

        }
    }
}
