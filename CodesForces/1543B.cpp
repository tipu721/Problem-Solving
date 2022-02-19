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

        ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
            continue;
        }
        ll mg=1,m=0;
        for(ll i=1; i<=1000; i++)
        {
            if(__gcd(a+i,b+i)>mg)
            {
                mg =__gcd(a+i,b+i);
                m=i;
            }
        }
        for(ll i=1; i<=1000; i++)
        {
            if(__gcd(a-i,b-i)>mg)
            {
                mg =__gcd(a-i,b-i);
                m=i;
            }
        }
        cout<<mg<<" "<<m<<endl;
    }

}


