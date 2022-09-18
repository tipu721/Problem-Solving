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
        ll n,b,x,y;
        cin>>n>>b>>x>>y;
        ll s=0,temp=0;
        for(int i=1; i<=n; i++)
        {

            if(temp+x>b)
            {
                temp-=y;
                s+=temp;
            }
            else
            {
                temp+=x;
                s+=temp;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
