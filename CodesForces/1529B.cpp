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
        ll n,ar[100005];
        cin>>n;
        for(int i=0;i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        if(ar[0]>0)
        {
            cout<<1<<endl;
            continue;
        }
        ll c=1,dif=abs(ar[1]-ar[0]);
        for(int i=1;i<n; i++)
        {
            dif=min(dif,abs(ar[i-1]-ar[i]));
            if(ar[i]>dif)
                break;
            else
                c++;
        }
        cout<<c<<endl;
    }

}

