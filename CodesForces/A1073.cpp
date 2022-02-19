#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    string s;
    cin>>n>>s;
    for(i=0; i<n-1; i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<"YES\n"<<s[i]<<s[i+1]<<endl;
            break;
        }
    }
    //cout<<i<<endl;
    if(i==n-1)
    cout<<"NO\n";
    //main();

}
