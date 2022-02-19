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
        stack<int>sk;
        for(int i=0;i<s.size();i++)
        {
            if(sk.size()==0)
                sk.push(s[i]);
            else if(s[i]=='B')
                sk.pop();
            else
                sk.push(s[i]);
        }
        cout<<sk.size( )<<endl;
    }
}
