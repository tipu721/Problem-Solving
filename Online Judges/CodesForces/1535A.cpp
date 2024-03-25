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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int mxab=max(a,b),mncd=min(c,d);
        int mxcd=max(c,d),mnab=min(a,b);
        if(mncd>mxab)
            cout<<"NO"<<endl;
        else if(mnab>mxcd)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

}
