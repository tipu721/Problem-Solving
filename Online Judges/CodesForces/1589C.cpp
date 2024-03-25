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
        ll n;
        cin>>n;
        ll ar[n+3],br[n+3];
        int f=1;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>br[i];
        }
        sort(ar,ar+n);
        sort(br,br+n);
        for(int i=0; i<n; i++)
        {
            int d=br[i]-ar[i];
            if(d!=0 && d!=1)
            {
                f=0;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




}



