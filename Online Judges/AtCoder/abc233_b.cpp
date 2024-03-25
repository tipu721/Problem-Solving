#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll l,r;
    string s;
    cin>>l>>r;
    cin>>s;
    reverse(s.begin()+l-1,s.begin()+r);
    cout<<s<<endl;
   // main();

}

