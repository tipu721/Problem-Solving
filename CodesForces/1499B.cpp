#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,c=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int f1=0,f2=0;
        bool ans1=true,ans2=true;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]=='1'&&s[i+1]=='1')
                f1=1;
            if(f1)
            {
                if(s[i]=='0'&&s[i+1]=='0')
                {
                    f2=1;
                    break;
                }
            }
        }

        if(f1&&f2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

