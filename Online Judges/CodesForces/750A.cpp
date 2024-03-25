#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    k=240-k;
    if(k<5)
    {
        cout<<0<<endl;
        main();
        return 0;
    }
    int sum=0,i;
    for(i=1; i<=n; i++)
    {
        sum+=(5*i);
        //cout<<sum<<endl;
        if(sum>k)
        {
            cout<<i-1<<endl;
            break;
        }

    }
    if(sum<k||sum==k)
        cout<<i-1<<endl;
    main();
    return 0;
}
