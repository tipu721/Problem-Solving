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
        int n;
        string s1,s2;
        cin>>n;
        cin>>s1>>s2;
        vector<int>ans;
        for(int i=0; i<n-1; i++)
        {
            if(s1[i]!=s1[i+1])
            {
                if(s1[0]=='1')
                    s1[0]='0';
                else
                    s1[0]='1';
                ans.push_back(i+1);
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s2[i]!=s1[0])
            {
                ans.push_back(i+1);
                s1[0]=s2[i];
            }
        }
        cout<<ans.size();
        for(int i=0; i<ans.size(); i++)
            cout<<" "<<ans[i];
        cout<<endl;
    }

}

