#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--)
    {
        int od=0,ev=0;
        cin>>n;
        for(int i=0; i<2*n; i++)
        {
            int a;
            cin>>a;
            if(a%2)
                od++;
            else
                ev++;
        }
        if(od==ev)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
