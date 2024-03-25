#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int x;
        cin>>s;
        int sz=s.size();
        string w;
        for(int i=0; i<s.size(); i++)
            w+='1';
        cin>>x;
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='0')
            {
                if(i+x<sz)w[i+x]='0';
                if(i-x>=0)w[i-x]='0';
            }
        }
        int f=1;
        for(int i=0; i<sz; i++)
        {

            if(s[i]=='1')
            {

                if((i+x<sz&&w[i+x]=='1')||(i-x>=0&&w[i-x]=='1'))
                {
                   continue;
                }
                else
                {
                    f=0;
                    break;
                }


            }
            else
            {
                if((i+x<sz&&w[i+x]=='1')||(i-x>=0&&w[i-x]=='1'))
                {
                   f=0;
                   break;
                }

            }
        }
        if(f)
            cout<<w<<endl;
        else
            cout<<-1<<endl;
    }
}
