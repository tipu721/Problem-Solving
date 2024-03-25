#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,c=0;
    cin>>t;
    while(t--)
    {
        ll n,k,a,b,c;
        cin>>n>>k;
        if(n==4)
        {
            cout<<1<<" "<<1<<" "<<2<<endl;
            continue;
        }
        if(n%2==1)
        {
            cout<<n/2<<" "<<n/2<<" "<<1<<endl;
        }
        else
        {

            if(n%3==0)
            {
               cout<<n/3<<" "<<n/3<<" "<<n/3<<endl;
            }
            else if((n/2)%2==1)
            {

                cout<<(n/2)-1<<" "<<(n/2)-1<<" "<<2<<endl;
            }
            else
            {
                cout<<(n/2)<<" "<<(n/2)/2<<" "<<(n/2)/2<<endl;
            }
        }


    }
}

