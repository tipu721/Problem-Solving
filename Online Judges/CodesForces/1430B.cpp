#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[200005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,k;
        cin>>n>>k;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        sort(ar,ar+n);
        for(int i=n-2; i>=0; i--)
        {
            ar[n-1]+=ar[i];
            k--;
            if(k==0)
                break;
        }
        cout<<ar[n-1]<<endl;
    }
}
