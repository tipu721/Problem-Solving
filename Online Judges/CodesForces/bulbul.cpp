#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,arr1[10005],arr2[100005],c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i]>>arr2[i];

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
                c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
