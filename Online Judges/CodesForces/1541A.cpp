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
        int ar[n+2];
        for(int i=1; i<=n; i++)
            ar[i]=i;
        for(int i=1; i<n; i+=2)
        {
            swap(ar[i],ar[i+1]);
        }
        if(n%2==1)
            swap(ar[n],ar[n-1]);
        for(int i=1; i<=n; i++)
            cout<<ar[i]<<" ";
        cout<<endl;
    }


}
