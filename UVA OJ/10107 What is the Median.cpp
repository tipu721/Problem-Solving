#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[100000],a,i=0;
    while(cin>>a)
    {
        arr[i]=a;

        sort(arr,arr+i+1);
        if(i%2==0)
            cout<<arr[i/2]<<endl;
        else
        {
            long long ans;
            ans=(arr[(i/2)]+arr[(i/2)+1])/2;
            cout<<ans<<endl;
        }
        i++;
    }
    return 0;
}
