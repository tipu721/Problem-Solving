#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2,ans,l;
        cin>>s1>>s2;
        if(s1.size()>s2.size())
        {
            swap(s1,s2);
        }
        string q1=s1,q2=s2;
        int p1=0,p2=0,f=0;
        if(s1==s2)
        {
            f=1;
        }
        else
        {
            while(s1.size()<=400||s2.size()<=400)
            {
                if(s1.size()<s2.size())
                {
                    s1+=q1;
                    p1++;
                    if(s1==s2)
                    {
                        f=1;
                        break;
                    }


                }
                else if(s1.size()>s2.size())
                {
                    s2+=q2;
                    p2++;;
                    if(s1==s2)
                    {
                        f=1;
                        break;
                    }
                }
                if(s1.size()==s2.size())
                    break;
                if(f==1)
                    break;
            }
        }
        if(f)
            cout<<s1<<endl;
        else
            cout<<-1<<endl;
    }
}
