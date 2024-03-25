#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,arr[10005];
    long long n;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int arr2[10]={0};
        cin>>n;
        for(int i=1; i<=n; i++)
            arr[i-1]=i;
        for(int j=0; j<n; j++)
        {
            while(arr[j]!=0)
            {
                int a=arr[j]%10;
                arr2[a]++;
                arr[j]=arr[j]/10;
            }
        }
        for(int i=0; i<10; i++)
        {
            if(i>0)
                cout<<" ";
            cout<<arr2[i];
        }
        cout<<endl;
    }
}
