#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long a;
    cin>>t;
    while(t--)
    {
        long long sum=0;
        cin>>a;
        for(int i=1;i<=a;i=i+2)
        sum+=i;
        cout<<sum*2-a<<endl;


    }
}
