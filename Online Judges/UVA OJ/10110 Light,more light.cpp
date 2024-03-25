#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        double m;
        if(n==9)
            cout<<"no\n";
        else
        {
            m=sqrt(n);
            if(m/int(m)==1)
                cout<<"yes\n";
            else
                cout<<"no\n";
        }
    }
    return 0;
}
