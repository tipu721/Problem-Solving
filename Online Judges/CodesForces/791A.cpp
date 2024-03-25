#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    for(int i=1;;i++)
    {
        a*=3;
        b*=2;
        if(a>b)
        {
            cout<<i<<endl;
            break;
        }
    }
    //main();
}
