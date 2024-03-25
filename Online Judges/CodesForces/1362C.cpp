#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,sum=0;
        cin>>a;
        if(a==1)
        {
            cout<<1<<endl;
            continue;
        }

        while(a!=1)
        {
            sum+=a;
            a=a/2;
        }
        sum+=1;
        cout<<sum<<endl;

    }
}
