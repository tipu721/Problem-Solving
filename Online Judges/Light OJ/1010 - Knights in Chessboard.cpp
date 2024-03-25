#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        ll n, m;
        cin>>n>>m;
        if( m==1 or n==1)
            cout<<"Case "<<i<<": "<<max(n,m)<<endl;
        else if(n ==2 or n==2)
            cout<<"Case "<<i<<": "<<((m*n)/8)*4 + (((m*n)%8)>=4?4:(m*n)%8)<<endl;
        else
            cout<<"Case "<<i<<": "<<(n*m+1)/2<<endl;
    }

}
