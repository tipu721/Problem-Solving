#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll ans = 0;
    for(int i=0; i<3; i++)
    {
        ans += (s[i]-'0') + (s[i]-'0')*10 + (s[i]-'0')*100;
    }
    cout<<ans<<endl;
  //  main();
    return 0;
}

