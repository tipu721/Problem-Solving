#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        string s1;
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]>='a'&&s[i]<='z')|| (s[i]>='A'&&s[i]<='Z'))
            {

                s1+=s[i];

            }
            else
            {
                if(s1[0]=='a'||s1[0]=='A'||s1[0]=='E'||s1[0]=='e'||
                        s1[0]=='i'||s1[0]=='I'||s1[0]=='O'||s1[0]=='o'|| s1[0]=='U'||s1[0]=='u')
                {
                    cout<<s1+"ay";
                    s1.clear();
                }
                else if (s1.empty()==0)
                {
                    for(int i=1; i<s1.size(); i++)
                        cout<<s1[i];
                    cout<<s1[0]<<"ay";
                    s1.clear();
                }
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}
