#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>myset;
    set<string>::iterator it;
    string s;
    while(cin>>s)
    {
        string p="";
        for(int i=0; i<=s.size(); i++)
        {
            if(isalpha(s[i]))
                p+=tolower(s[i]);
            else if(p!="")
            {
                myset.insert(p);
                p="";
            }
        }
    }
    for(it=myset.begin(); it!=myset.end(); it++)
        cout<<*it<<endl;
    return 0;
}
