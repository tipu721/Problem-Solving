#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<=b&&(a+b)%3==0&&a*2>=b)
        cout<<"YES"<<endl;
        else if(a>=b&&(a+b)%3==0&&b*2>=a)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
