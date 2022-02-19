#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(int i=1; i<=n; i++)
            arr[i]=i;
        for(int i=2; i*i<=n; i++)
        {
            if(arr[i]!=-1)
                for(int j=2; j*i<=n; j++)
                    arr[i*j]=-1;
        }
        long long c=0;
        for(int i=2; i<=n; i++)
            if(arr[i]!=-1&&n%arr[i]==0)
                c++;
        cout<<n<<" : "<<c<<endl;
    }
    return 0;

}
