#include<bits/stdc++.h>
using namespace std;
#define ll long logn
int main()
{
    int a[105],b[105];
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]>a[i])
                    c++;
            }
            cout<<c<<" ";
            c=0;
        }
        cout<<0<<endl;
    }
}
