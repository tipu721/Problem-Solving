#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans;
        ans=a%b;
        if(ans==0)
            cout<<0<<endl;
        else
            cout<<b-ans<<endl;
    }
}
