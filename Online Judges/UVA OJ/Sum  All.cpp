#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum=arr[0],sum1=0,sum2;
    for(int i=1;i<n;i++)
    {
        sum=sum+arr[i];
        sum1=sum1+sum;
    }
    cout<<sum1;
}
