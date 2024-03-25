#include<bits/stdc++.h>
using namespace std;
int car[10];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int mx=0;
        for(char i='0'; i<='9'; i++ )
        {
            for(char j='0'; j<='9'; j++)
            {
                int tm=0;

                for(int k=0; k<s.size(); k++)
                {
                    if(tm & 1)
                    {
                        if(s[k]==j)
                            tm++;
                    }
                    else if(!(tm & 1))
                    {
                        if(s[k]==i)
                            tm++;
                    }

                }
                if(i!=j)
                    if(tm & 1)
                    tm--;
                mx=max(mx,tm);
                //cout<<mx<<endl;


            }
        }

            cout<<s.size()-mx<<endl;

    }
}
