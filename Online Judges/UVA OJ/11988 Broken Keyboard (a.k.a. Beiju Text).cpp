#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        list<char>mylist;
        list<char>::iterator it=mylist.begin();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
                it=mylist.begin();
            else if(s[i]==']')
                it=mylist.end();
            else
                mylist.insert(it,s[i]);
        }
        for(it=mylist.begin();it!=mylist.end();it++)
            cout<<*it;
        cout<<endl;

    }
}
