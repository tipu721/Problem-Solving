#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ar[105],c1=0,c2=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if(ar[i]==2)
                c2++;
            else
                c1++;
        }
        if(c2%2==0&&c1%2==0)
            cout<<"YES"<<endl;
        else if(c2%2==1)
        {
            if(c1%2==0&&c1>1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;



    }
}
