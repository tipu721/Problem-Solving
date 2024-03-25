#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c=0;

        vector<ll>vec;
        cin>>n;
        ll a,b;
        //if(n%2==0)
        for(int i=0;i<n;i++)
        {

            cin>>a;
           vec.push_back(a);
           //vec.push_back(b);

        }
        ll mn=vec[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(vec[i]>mn)
                c++;
            else
                mn=vec[i];
        }
       cout<<c<<endl;
    }
}
