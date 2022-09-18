#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k;
    cin>>k;
    vector<int>v;
    while(k!=0)
    {
        ll d = k%2;
        //cout<<d<<endl;
        v.push_back(d);
        k/=2;

    }
    for(int i=v.size()-1; i>=0; i--)
    {
        if(v[i]==1)
            cout<<2;
        else
            cout<<0;
    }
    cout<<endl;
   // main();
    return 0;
}
