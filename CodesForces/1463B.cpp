#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb   push_back;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[1000],b[10000];
        ll os=0,es=0;
        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
            if(i%2==0)
                os+=ar[i];
            else
                es+=ar[i];
        }
        if(os<es)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                    cout<< 1 <<" ";
                else
                    cout<< ar[i] <<" ";
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                    cout<< ar[i] <<" ";
                else
                    cout<< 1 <<" ";
            }
        }
        cout<<endl;
    }
}
