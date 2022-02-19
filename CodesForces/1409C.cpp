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
        ll n,x,y,p;
        cin>>n>>x>>y;
        for(int i=n-1;i>=1;i--)
        {
            if((y-x) % i == 0)
            {
                p=(y-x)/i;
                //cout<<p<<endl;
                break;
            }
        }
        ll z=y,c=0;
        while(z>=1)
        {
            cout<<z<<" ";
            c++;
            if(c==n)
                break;
            z-=p;

        }
        while(c<n)
        {
            y+=p;
            cout<<y<<" ";
            c++;

        }
        cout<<endl;
    }
}

