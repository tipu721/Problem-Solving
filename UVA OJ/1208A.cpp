#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n,x,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        x=a^b;
        if(n%3==0)
            cout<<a<<endl;
        else if(n%3==1)
            cout<<b<<endl;

        else
            cout<<x<<endl;
    }
}
