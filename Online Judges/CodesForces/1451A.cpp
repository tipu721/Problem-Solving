#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,mxd=0;
        cin>>a;
        if(a==1)
            cout<<0<<endl;
        else if(a==2)
            cout<<1<<endl;
        else if(a==3)
            cout<<2<<endl;
        else if(a%2==0)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
}
