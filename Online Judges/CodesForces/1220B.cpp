#include<bits/stdc++.h>
using namespace std;
long long arr[1003][1004];
int main()
{
    int n;
    //long long arr[1003][1004];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    if(n==3)
    {
        long long a=(arr[0][1]*arr[0][2])/arr[1][2];
        long long b=(arr[1][0]*arr[1][2])/arr[0][2];
        long long c=(arr[2][0]*arr[2][1])/arr[0][1];
        cout<<(int)sqrt(a)<<" "<<(int)sqrt(b)<<" "<<(int)sqrt(c)<<endl;
    }
    else
    {
        for(int i=0; i<(n/2); i++)
        {
            long long ans=(arr[i][i+1]*arr[i][i+2])/arr[i+1][i+2];
            cout<<(int)sqrt(ans)<<" ";
        }
        for(int i=(n/2); i<n; i++)
        {
            long long ans=(arr[i][i-1]*arr[i][i-2])/arr[i-1][i-2];
            //cout<<arr[i-1][i-2]<<endl;
            cout<<(int)sqrt(ans)<<" ";
        }
    }
    //main();

}
