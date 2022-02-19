#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s=0;
        cin>>n;
        if(n%2==1)
            cout<<"YES"<<endl;
        else
        {
            while(n!=0)
            {
                n=n/2;
                if(n%2==1)
                    break;
            }
            if(n>1&&n%2==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }


}

