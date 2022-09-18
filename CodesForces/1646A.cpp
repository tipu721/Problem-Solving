#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,s,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        n=n*n;
        cout<<s/n<<endl;
    }


}
