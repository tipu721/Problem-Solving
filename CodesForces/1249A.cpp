#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[200],n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int f=0;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i+1]-arr[i]==1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }

}
