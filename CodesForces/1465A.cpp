#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==')')
                c++;
            else
                break;
        }
        if(c>(n-c))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
