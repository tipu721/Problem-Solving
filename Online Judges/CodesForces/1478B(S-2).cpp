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
        ll q,d;
        cin>>q >>d;
        while(q--)
        {
            ll a,f=0;
            cin>>a;
            while(a>=d)
            {
                string s1,s2;
                s1=to_string(a);
                s2=to_string(d);
                if(s1.find(s2)!=-1)
                {
                    f=1;
                    break;
                }
                else
                    a-=d;

            }
            if(f)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
