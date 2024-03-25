#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        stack<string>fs;
        stack<string>bs;
        string s,q;
        cout<<"Case "<<i<<":"<<endl;
        s="http://www.lightoj.com/";
        while(1)
        {

            cin>>q;
            if(q=="VISIT")
            {
                bs.push(s);
                cin>>s;
                while(!fs.empty())
                {
                    fs.pop();
                }

            }
            else if(q=="BACK")
            {
                if(bs.empty())
                {
                    cout<<"Ignored"<<endl;
                    continue;
                }
                else
                {
                    fs.push(s);
                    s = bs.top();
                    bs.pop();
                }
            }
            else if(q=="FORWARD")
            {
                if(fs.empty())
                {
                    cout<<"Ignored"<<endl;
                    continue;
                }
                else
                {
                    bs.push(s);
                    s = fs.top();
                    fs.pop();
                }
            }
            else if(q=="QUIT")
                break;
            cout<<s<<endl;
        }

    }
}
