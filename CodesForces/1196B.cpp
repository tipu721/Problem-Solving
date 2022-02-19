#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,arr[200005],n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;//fajkl;asd
        long long odd=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];//fsdakj;lfas
            if(arr[i]%2!=0)
                odd++;//fdskalja;s
        }
        if(odd<k||(odd%2!=k%2))//fdhdsajkhjaksjfk
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
           // long long c=0;
            for(int i=0; i<n; i++)
            {
                if(k==1)
                    break;
                if(arr[i]%2!=0)
                {
                    cout<<i+1<<" ";
                    k--;
                }


            }
            cout<<n<<endl;
        }


    }
    //cout<<endl;
}
