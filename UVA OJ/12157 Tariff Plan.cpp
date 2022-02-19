#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,a,mile=0,juice=0;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>a;
            mile=mile+ceil((a+1)/30.0)*10;
            juice=juice+ceil((a+1)/60.0)*15;
        }
        if(mile<juice)
            printf("Case %d: Mile %d\n",i,mile);
        else if(juice<mile)
            printf("Case %d: Juice %d\n",i,juice);
        else
            printf("Case %d: Mile Juice %d\n",i,mile);
    }
    return 0;
}
