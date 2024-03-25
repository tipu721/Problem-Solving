#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,d;
    while(cin>>s>>d)
    {
        long long a=s;
        for(long long i=s;i<d;i=i+a)
            a++;
        cout<<a<<endl;
    }
    return 0;
}
