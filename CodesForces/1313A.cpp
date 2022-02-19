#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[3];
    cin>>t;
    for(int i=1; i<=t; i++)

    {

        int ans=0;
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if(arr[0]>0)
        {
            ans++;
            arr[0]--;

        }
        if(arr[1]>0)
        {
            ans++;
            arr[1]--;

        }
        if(arr[2]>0)
        {
            ans++;
            arr[2]--;
        }
        if(arr[2]>0&&arr[1]>0)
        {
            ans++;
            arr[2]--;
            arr[1]--;

        }
        if(arr[2]>0&&arr[0]>0)
        {
            ans++;
            arr[0]--;
            arr[2]--;
        }
        if(arr[1]>0&&arr[0]>0)
        {
            ans++;
            arr[1]--;
            arr[0]--;
        }
        if(arr[0]>0&&arr[1]>0&&arr[2]>0)
            ans++;
        cout<<ans<<endl;

    }
}
