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
        ll n,ans=0;
        cin>>n;
        if(n%2020==0 || n%2021==0)
        {
            ans = 1;
        }
        else if(n>=2020)
        {
           while(n>2020)
           {
               n-=2021;
               if(n%2020==0)
               {
                   ans=1;
                   break;
               }
           }

        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}

