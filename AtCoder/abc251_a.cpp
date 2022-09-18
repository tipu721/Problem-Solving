#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string ans = s;
    while(1)
    {
        if(ans.size() == 6)
            break;
        ans+=s;
    }
    cout<<ans<<endl;
   // main();


}

