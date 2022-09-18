#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(ll x)
{
    return x*x + 2*x + 3;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x,ans;
    cin>>x;
    cout<<f(f(f(x)+x)+f(f(x)));





}

