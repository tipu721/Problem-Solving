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
        ll n,f=0;
        cin>>n;
        for(int i=0; i*111<=n; i++)
        {
            if((n-111*i)%11==0)
            {
                f=1;
                break;

            }
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}

