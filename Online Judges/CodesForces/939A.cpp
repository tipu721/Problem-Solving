#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[5005];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int f=0;
    for(int i=1; i<=n; i++)
    {
        if(i==arr[arr[arr[i]]])
        {
            f=1;
            break;
        }

    }
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
