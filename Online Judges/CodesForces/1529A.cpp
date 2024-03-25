#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[102],n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==ar[0])
                c++;
        }
        cout<<n-c<<endl;
    }
}
