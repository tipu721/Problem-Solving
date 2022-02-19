#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,n;
    int ans,i=1;
    while(cin>>r>>n)
    {
        if(r==0&n==0)
            break;
        ans=ceil((r-n)/n);
        if(ans>26)
            printf("Case %d: impossible\n",i);
        else
            printf("Case %d: %d\n",i,ans);
        i++;
    }
    return 0;
}
