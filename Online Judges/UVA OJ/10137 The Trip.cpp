#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double arr[1005];
    while(cin>>n)
    {
        if(n==0)
            break;
        double sum=0,sum2=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        double avg=sum/n;
        for(int i=0; i<n; i++)
        {
            if(arr[i]<avg)
                sum2+=(avg-arr[i]);
        }
        cout<<fixed<<setprecision(2);
        cout<<"$"<<sum2<<endl;
    }
    return 0;
}
