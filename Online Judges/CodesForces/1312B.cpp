#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ar[102];
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
        for(int i=n-1;i>=0;i--)
            cout<<ar[i]<<" ";
        cout<<endl;
    }
}
