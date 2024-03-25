#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(k>n)
            cout<<"NO"<<endl;
        else if(n%k==0)
        {
            cout<<"YES"<<endl;
            while(k--)
            {
                cout<<n/k<<" ";
            }
            cout<<endl;
        }
        else
        {
            int rem=n%k;
            int res=n/k


        }
    }
}
