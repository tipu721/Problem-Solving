#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=1,k=2;
        cin>>n;
        for(int i=1;;i++)
        {
            sum+=k;
            k*=2;
            //cout<<sum<<endl;
            if(n%sum==0)
            {
                cout<<n/sum<<endl;
                break;
            }
        }
    }
}
