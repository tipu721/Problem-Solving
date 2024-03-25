#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,a,b;
    cin>>t;
    while(t--)
    {   ll c=0;
        cin>>a>>b;
        while(a!=0)
        {
            c=c+(a%b)+1;
            a=a/b;

        }
        cout<<c-1<<endl;
    }
}
