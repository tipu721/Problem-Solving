#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        long long sum=2;
        if(n<=2)
        {
            cout<<1<<endl;
            continue;
        }
        for(int i=2;;i++)
        {
            sum+=x;
            if(sum>=n)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
