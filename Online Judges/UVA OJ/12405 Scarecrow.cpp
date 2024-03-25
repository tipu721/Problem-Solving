#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int c=0;
        cin>>n;
        char s[n];
        cin>>s;
        for(int j=0; j<strlen(s);)
        {
            if(s[j]=='.')
            {
                c++;
                j=j+3;
            }
            else
                j++;

        }
        cout<<"Case "<<i<<": "<<c<<endl;
    }
    return 0;
}
