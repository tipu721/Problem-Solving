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
       ll l,r,a,ans;
       cin>>l>>r>>a;
       ll mod = r % a;
       if(r-l > mod)
        mod=a-1;
      cout<<mod+(r-mod)/a<<endl;


    }


}
