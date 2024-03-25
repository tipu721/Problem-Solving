#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb   push_back;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        ll x=pow(10,c-1);
        ll y=pow(10,c-1);
        while(x<(ll)pow(10,a-1))
        {
            x*=3;
        }
        while(y<(ll)pow(10,b-1))
        {
            y*=5;
        }
        cout<<x<<" "<<y<<endl;
    }
}
