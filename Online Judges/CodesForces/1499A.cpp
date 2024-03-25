#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,c=0;
    cin>>t;
    while(t--)
    {
        int n,k1,k2;
        int w,b;
        cin>>n>>k1>>k2;
        cin>>w>>b;
        if((k1+k2>=w*2)&&((n-k1)+(n-k2))>=b*2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
