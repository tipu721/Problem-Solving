#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int sum=0;
        while(n>2)
        {
            int a=n/3;
            sum+=a;
            n=a+n%3;
        }
        if(n==2)
            sum++;
        cout<<sum<<endl;
    }
    return 0;
}
