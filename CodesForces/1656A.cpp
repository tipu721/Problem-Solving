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
        int n;
        cin>>n;
        ll ar[n+3],ar2[n+3];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            ar2[i]=ar[i];
        }
        sort(ar,ar+n);
        for(int i=0; i<n; i++)
        {
            if(ar2[i]==ar[n-1])
                cout<<i+1<<" ";
        }
        for(int i=0; i<n; i++)
        {
            if(ar2[i]==ar[0])
                cout<<i+1<<endl;
        }
    }

    return 0;
}
