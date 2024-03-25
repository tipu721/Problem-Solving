#include<bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n>13)
            cout<<"Overflow!\n";
        else if(n<8)
            cout<<"Underflow!\n";
        else
            cout<<fact(n)<<endl;
    }
    return 0;
}
