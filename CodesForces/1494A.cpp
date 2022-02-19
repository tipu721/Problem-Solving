#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {

        string s1,s2;
        cin>>s1;
        int c1=0,c2=0,c3=0;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]==s1[0])
                c1++;
            else if(s1[s1.size()-1]==s1[i])
                c3++;
            else
                c2++;
        }
        int ans=0,f=1;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==s1[0])
                ans++;
            else if(s1[s1.size()-1]==s1[i])
                ans--;
            else
            {
                if(c1<c3)
                    ans++;
                else
                    ans--;
            }
            if(ans<0)
            {
                f=0;
                break;
            }
        }
        if(f && ans==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}

