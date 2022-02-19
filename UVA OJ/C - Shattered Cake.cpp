#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long w,n,a,b;
    while(cin>>w>>n)
    {
        long long sum=0;
        while(n--)
        {
            cin>>a>>b;
            sum+=a*b;
        }
        cout<<sum/w<<endl;
    }
}
