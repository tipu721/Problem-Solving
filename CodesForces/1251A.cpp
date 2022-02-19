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
        set<char>st;
        char a=s[0];
        int c=0;
        for(int  i=0; i<s.size(); i++)
        {
            if(s[i]==a)
                c++;
            else
            {
                if(c%2==1)
                {
                    st.insert(s[i-1]);
                }
                c=1;
                a=s[i];
            }

        }
        if(c%2==1)
            st.insert(s[s.size()-1]);
        for(auto i =st.begin();i!=st.end();i++)
        {
            cout<<*i;
        }
        cout<<endl;


    }
}
