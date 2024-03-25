#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='t')
                cout<<s[i];
            else
                c++;
        }
        for(int i=1;i<=c;i++)
            cout<<'t';
        cout<<endl;
    }
}
