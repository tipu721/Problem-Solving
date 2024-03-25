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
        string s;
        bool ans=true;
        cin>>s;
        ll id=0;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='a')
            {
                id=i;
                break;
            }
        }
        char ch= 'a';
        for(ll i=id,j=id+1,c=0; c<s.size(); c++,ch++)
        {
            if(i>=0 && s[i]==ch)
                i--;
            else if(j<s.size() && s[j]==ch)
                j++;
            else
            {
                ans=false;
                break;

            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}

