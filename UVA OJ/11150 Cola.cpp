#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {   int sum=n;
        while(n>=3)
        {
            int a=n/3;
            sum=sum+a;
            n=(n/3)+(n%3);
        }
        if(n==2)
            sum++;
        cout<<sum<<endl;

    }
    return 0;
}
