#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    for(int i=1;i<=1001;i++)
    {
        cin>>n;
        if(n==0)
            break;
        long long s;
        s=ceil((3+sqrt(9+8*n))/2);
        cout<<"Case "<<i<<": "<<s<<endl;
    }
    return 0;
}
