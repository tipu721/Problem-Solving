#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s=="0")
    {
        cout<<"No"<<endl;
        return 0;
    }

    int f=0;
    for(int i=0;i<n-1;i++)
    {
        if((s[i]=='1'&&s[i+1]=='1')||(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0')||(s[0]=='0'&&s[1]=='0')||(s[n-1]=='0'&&s[n-2]=='0'))
           {
               cout<<"No"<<endl;
               f=1;
               break;
           }
    }
    if(f==0)
        cout<<"Yes"<<endl;
    main();
}
