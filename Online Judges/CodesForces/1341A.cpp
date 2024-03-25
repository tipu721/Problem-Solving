#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c1=0;
    while(t--)
    {
        int a,b,c,d,n,ans=0;
        cin>>n>>a>>b>>c>>d;
        if((a-b)*n<=(c+d)&&(a+b)*n>=(c-d))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
