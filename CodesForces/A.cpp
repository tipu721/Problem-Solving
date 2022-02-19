#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        while(1)
        {
            ll p=n-1;
            n=n&(n-1);
            if(n==0)
            {
                cout<<p<<endl;
                break;
            }
        }

    }

}

