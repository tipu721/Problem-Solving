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
        cin>>s;
        map<char,int>mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(mp[s[i]]==1)
            {
                for(int j=i; j<s.size(); j++)
                    cout<<s[j];
                break;
            }
            else
                mp[s[i]]--;
        }
        cout<<endl;
    }

    return 0;
}

